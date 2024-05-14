/*
 * DISTRHO Cardinal Plugin
 * Copyright (C) 2021-2024 Filipe Coelho <falktx@falktx.com>
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

// Theme 






#include "rack.hpp"
#include "plugin.hpp"

#include "DistrhoUtils.hpp"

// Cardinal (built-in)
#include "Cardinal/src/plugin.hpp"

// Fundamental (always enabled)
#include "Fundamental/src/plugin.hpp"

// ZamAudio (always enabled) - TODO
// #include "ZamAudio/src/plugin.hpp"


// Befaco
#define modelADSR modelBefacoADSR
#define modelMixer modelBefacoMixer
#define modelBurst modelBefacoBurst
#include "Befaco/src/plugin.hpp"
#undef modelADSR
#undef modelMixer
#undef modelBurst


// H4N4 Modules
#include "h4n4-modules/src/plugin.hpp"




// known terminal modules
std::vector<Model*> hostTerminalModels;

// stuff that reads config files, we don't want that
int loadConsoleType() { return 0; }
bool loadDarkAsDefault() { return settings::preferDarkPanels; }

int loadDirectOutMode() { return 0; }


//void readDefaultTheme() { defaultPanelTheme = loadDefaultTheme(); }
void saveConsoleType(int) {}
void saveDarkAsDefault(bool) {}

void saveDirectOutMode(bool) {}
void saveHighQualityAsDefault(bool) {}
void writeDefaultTheme() {}

// plugin instances
Plugin* pluginInstance__Cardinal;
Plugin* pluginInstance__Fundamental;
Plugin* pluginInstance__Befaco;
Plugin* pluginInstance__BogaudioModules;
Plugin* pluginInstance__H4N4;


namespace rack {

namespace asset {
std::string pluginManifest(const std::string& dirname);
std::string pluginPath(const std::string& dirname);
}

namespace plugin {

struct StaticPluginLoader {
    Plugin* const plugin;
    FILE* file;
    json_t* rootJ;

    StaticPluginLoader(Plugin* const p, const char* const name)
        : plugin(p),
          file(nullptr),
          rootJ(nullptr)
    {
#ifdef DEBUG
        DEBUG("Loading plugin module %s", name);
#endif

        p->path = asset::pluginPath(name);

        const std::string manifestFilename = asset::pluginManifest(name);

        if ((file = std::fopen(manifestFilename.c_str(), "r")) == nullptr)
        {
            d_stderr2("Manifest file %s does not exist", manifestFilename.c_str());
            return;
        }

        json_error_t error;
        if ((rootJ = json_loadf(file, 0, &error)) == nullptr)
        {
            d_stderr2("JSON parsing error at %s %d:%d %s", manifestFilename.c_str(), error.line, error.column, error.text);
            return;
        }

        // force ABI, we use static plugins so this doesnt matter as long as it builds
        json_t* const version = json_string((APP_VERSION_MAJOR + ".0").c_str());
        json_object_set(rootJ, "version", version);
        json_decref(version);

        // Load manifest
        p->fromJson(rootJ);

        // Reject plugin if slug already exists
        if (Plugin* const existingPlugin = getPlugin(p->slug))
            throw Exception("Plugin %s is already loaded, not attempting to load it again", p->slug.c_str());
    }

    ~StaticPluginLoader()
    {
        if (rootJ != nullptr)
        {
            // Load modules manifest
            json_t* const modulesJ = json_object_get(rootJ, "modules");
            plugin->modulesFromJson(modulesJ);

            json_decref(rootJ);
            plugins.push_back(plugin);
        }

        if (file != nullptr)
            std::fclose(file);
    }

    bool ok() const noexcept
    {
        return rootJ != nullptr;
    }

    void removeModule(const char* const slugToRemove) const noexcept
    {
        json_t* const modules = json_object_get(rootJ, "modules");
        DISTRHO_SAFE_ASSERT_RETURN(modules != nullptr,);

        size_t i;
        json_t* v;
        json_array_foreach(modules, i, v)
        {
            if (json_t* const slug = json_object_get(v, "slug"))
            {
                if (const char* const value = json_string_value(slug))
                {
                    if (std::strcmp(value, slugToRemove) == 0)
                    {
                        json_array_remove(modules, i);
                        break;
                    }
                }
            }
        }
    }
};

static void initStatic__Cardinal()
{
    Plugin* const p = new Plugin;
    pluginInstance__Cardinal = p;

    const StaticPluginLoader spl(p, "Cardinal");
    if (spl.ok())
    {
        p->addModel(modelAidaX);
        p->addModel(modelCardinalBlank);
        p->addModel(modelExpanderInputMIDI);
        p->addModel(modelExpanderOutputMIDI);
        p->addModel(modelHostAudio2);
        p->addModel(modelHostAudio8);
        p->addModel(modelHostCV);
        p->addModel(modelHostMIDI);
        p->addModel(modelHostMIDICC);
        p->addModel(modelHostMIDIGate);
        p->addModel(modelHostMIDIMap);
        p->addModel(modelHostParameters);
        p->addModel(modelHostParametersMap);
        p->addModel(modelHostTime);
        p->addModel(modelTextEditor);
       #ifndef DGL_USE_GLES
        p->addModel(modelGlBars);
       #else
        spl.removeModule("glBars");
       #endif
       #ifndef STATIC_BUILD
        p->addModel(modelAudioFile);
       #else
        spl.removeModule("AudioFile");
       #endif
       #if !(defined(DISTRHO_OS_WASM) || defined(STATIC_BUILD))
        p->addModel(modelCarla);
        p->addModel(modelIldaeil);
       #else
        spl.removeModule("Carla");
        spl.removeModule("Ildaeil");
       #endif
       #ifndef HEADLESS
        p->addModel(modelSassyScope);
       #else
        spl.removeModule("SassyScope");
       #endif
       #if defined(HAVE_X11) && !defined(HEADLESS) && !defined(STATIC_BUILD)
        p->addModel(modelMPV);
       #else
        spl.removeModule("MPV");
       #endif
       #ifdef HAVE_FFTW3F
        p->addModel(modelAudioToCVPitch);
       #else
        spl.removeModule("AudioToCVPitch");
       #endif

        hostTerminalModels = {
            modelHostAudio2,
            modelHostAudio8,
            modelHostCV,
            modelHostMIDI,
            modelHostMIDICC,
            modelHostMIDIGate,
            modelHostMIDIMap,
            modelHostParameters,
            modelHostParametersMap,
            modelHostTime,
        };
    }
}

static void initStatic__Fundamental()
{
    Plugin* const p = new Plugin;
    pluginInstance__Fundamental = p;

    const StaticPluginLoader spl(p, "Fundamental");
    if (spl.ok())
    {
        p->addModel(model_8vert);
        p->addModel(modelADSR);
        p->addModel(modelDelay);
        p->addModel(modelLFO);
        p->addModel(modelLFO2);
        p->addModel(modelMerge);
        p->addModel(modelMidSide);
        p->addModel(modelMixer);
        p->addModel(modelMutes);
        p->addModel(modelNoise);
        p->addModel(modelOctave);
        p->addModel(modelPulses);
        p->addModel(modelQuantizer);
        p->addModel(modelRandom);
        p->addModel(modelScope);
        p->addModel(modelSEQ3);
        p->addModel(modelSequentialSwitch1);
        p->addModel(modelSequentialSwitch2);
        p->addModel(modelSplit);
        p->addModel(modelSum);
        p->addModel(modelVCA);
        p->addModel(modelVCA_1);
        p->addModel(modelVCF);
        p->addModel(modelVCMixer);
        p->addModel(modelVCO);
        p->addModel(modelVCO2);
    }
}

/*
static void initStatic__ZamAudio()
{
    Plugin* const p = new Plugin;
    pluginInstance__ZamAudio = p;

    const StaticPluginLoader spl(p, "ZamAudio");
    if (spl.ok())
    {
        p->addModel(modelZamComp);
    }
}
*/


static void initStatic__Befaco()
{
    Plugin* const p = new Plugin;
    pluginInstance__Befaco = p;

    const StaticPluginLoader spl(p, "Befaco");
    if (spl.ok())
    {
#define modelADSR modelBefacoADSR
#define modelMixer modelBefacoMixer
#define modelBurst modelBefacoBurst
        p->addModel(modelEvenVCO);
        p->addModel(modelRampage);
        p->addModel(modelABC);
        p->addModel(modelSpringReverb);
        p->addModel(modelMixer);
        p->addModel(modelSlewLimiter);
        p->addModel(modelDualAtenuverter);
        p->addModel(modelPercall);
        p->addModel(modelHexmixVCA);
        p->addModel(modelChoppingKinky);
        p->addModel(modelKickall);
        p->addModel(modelSamplingModulator);
        p->addModel(modelMorphader);
        p->addModel(modelADSR);
        p->addModel(modelSTMix);
        p->addModel(modelMuxlicer);
        p->addModel(modelMex);
        p->addModel(modelNoisePlethora);
        p->addModel(modelChannelStrip);
        p->addModel(modelPonyVCO);
        p->addModel(modelMotionMTR);
        p->addModel(modelBurst);
        p->addModel(modelVoltio);
#undef modelADSR
#undef modelMixer
#undef modelBurst
    }
}

static void initStatic__H4N4()
{
    Plugin* const p = new Plugin;
    pluginInstance__H4N4 = p;

    const StaticPluginLoader spl(p, "h4n4-modules");
    if (spl.ok())
    {
        p->addModel(modelXenQnt);
    }
}


void initStaticPlugins()
{
    initStatic__Cardinal();
    initStatic__Fundamental();
    initStatic__Befaco();
    initStatic__H4N4();
   
}

void destroyStaticPlugins()
{
    for (Plugin* p : plugins)
        delete p;
    plugins.clear();
}

void updateStaticPluginsDarkMode()
{
    const bool darkMode = settings::preferDarkPanels;
    // bogaudio
    {
        //Skins& skins(Skins::skins());
        //skins._default = darkMode ? "dark" : "light";

       // std::lock_guard<std::mutex> lock(skins._defaultSkinListenersLock);
      //  for (auto listener : skins._defaultSkinListeners) {
        //    listener->defaultSkinChanged("dark");
       // }
    }
    // meander
    {
        int panelTheme = 1;
    }
    // glue the giant
    {
        //gtg_default_theme = darkMode ? 1 : 0;
    }
    // surgext
    {
        // surgext_rack_update_theme();
    }
}

}
}

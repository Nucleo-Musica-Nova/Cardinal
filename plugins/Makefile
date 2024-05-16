#!/usr/bin/make -f
# Makefile for Cardinal #
# --------------------- #
# Created by falkTX
#

BUILDING_RACK = true
ROOT = ..
include $(ROOT)/Makefile.base.mk

# --------------------------------------------------------------
# List of drwav functions, used in several modules

DRWAV  = drwav
DRWAV += drwav__on_read
DRWAV += drwav__on_seek
DRWAV += drwav__read_and_close_f32
DRWAV += drwav__read_and_close_s16
DRWAV += drwav__read_and_close_s32
DRWAV += drwav_alaw_to_f32
DRWAV += drwav_alaw_to_s16
DRWAV += drwav_alaw_to_s16
DRWAV += drwav_alaw_to_s32
DRWAV += drwav_bytes_to_f32
DRWAV += drwav_bytes_to_s16
DRWAV += drwav_bytes_to_s32
DRWAV += drwav_bytes_to_s64
DRWAV += drwav_bytes_to_u16
DRWAV += drwav_bytes_to_u32
DRWAV += drwav_bytes_to_u64
DRWAV += drwav_close
DRWAV += drwav_close
DRWAV += drwav_container
DRWAV += drwav_data_chunk_size_riff
DRWAV += drwav_data_chunk_size_w64
DRWAV += drwav_data_format
DRWAV += drwav_f32_to_s16
DRWAV += drwav_f32_to_s32
DRWAV += drwav_f64_to_f32
DRWAV += drwav_f64_to_s16
DRWAV += drwav_f64_to_s16
DRWAV += drwav_f64_to_s32
DRWAV += drwav_fmt_get_format
DRWAV += drwav_fopen
DRWAV += drwav_fourcc_equal
DRWAV += drwav_free
DRWAV += drwav_get_cursor_in_pcm_frames
DRWAV += drwav_get_length_in_pcm_frames
DRWAV += drwav_guid_equal
DRWAV += drwav_init
DRWAV += drwav_init_ex
DRWAV += drwav_init_file
DRWAV += drwav_init_file_ex
DRWAV += drwav_init_file_ex_w
DRWAV += drwav_init_file_w
DRWAV += drwav_init_file_with_metadata
DRWAV += drwav_init_file_with_metadata_w
DRWAV += drwav_init_file_write
DRWAV += drwav_init_file_write
DRWAV += drwav_init_file_write__internal
DRWAV += drwav_init_file_write__internal
DRWAV += drwav_init_file_write_sequential
DRWAV += drwav_init_file_write_sequential
DRWAV += drwav_init_file_write_sequential_pcm_frames
DRWAV += drwav_init_file_write_sequential_pcm_frames_w
DRWAV += drwav_init_file_write_sequential_w
DRWAV += drwav_init_file_write_w
DRWAV += drwav_init_memory
DRWAV += drwav_init_memory_ex
DRWAV += drwav_init_memory_with_metadata
DRWAV += drwav_init_memory_write
DRWAV += drwav_init_memory_write
DRWAV += drwav_init_memory_write__internal
DRWAV += drwav_init_memory_write__internal
DRWAV += drwav_init_memory_write_sequential
DRWAV += drwav_init_memory_write_sequential_pcm_frames
DRWAV += drwav_init_with_metadata
DRWAV += drwav_init_write
DRWAV += drwav_init_write
DRWAV += drwav_init_write__internal
DRWAV += drwav_init_write_sequential
DRWAV += drwav_init_write_sequential_pcm_frames
DRWAV += drwav_init_write_with_metadata
DRWAV += drwav_metadata
DRWAV += drwav__metadata_parser
DRWAV += drwav_mulaw_to_f32
DRWAV += drwav_mulaw_to_s16
DRWAV += drwav_mulaw_to_s16
DRWAV += drwav_mulaw_to_s32
DRWAV += drwav_open
DRWAV += drwav_open_and_read_f32
DRWAV += drwav_open_and_read_file_f32
DRWAV += drwav_open_and_read_file_s16
DRWAV += drwav_open_and_read_file_s32
DRWAV += drwav_open_and_read_memory_f32
DRWAV += drwav_open_and_read_memory_s16
DRWAV += drwav_open_and_read_memory_s32
DRWAV += drwav_open_and_read_pcm_frames_f32
DRWAV += drwav_open_and_read_pcm_frames_s16
DRWAV += drwav_open_and_read_pcm_frames_s32
DRWAV += drwav_open_and_read_s16
DRWAV += drwav_open_and_read_s32
DRWAV += drwav_open_ex
DRWAV += drwav_open_file
DRWAV += drwav_open_file_and_read_f32
DRWAV += drwav_open_file_and_read_pcm_frames_f32
DRWAV += drwav_open_file_and_read_pcm_frames_f32_w
DRWAV += drwav_open_file_and_read_pcm_frames_s16
DRWAV += drwav_open_file_and_read_pcm_frames_s16_w
DRWAV += drwav_open_file_and_read_pcm_frames_s32
DRWAV += drwav_open_file_and_read_pcm_frames_s32_w
DRWAV += drwav_open_file_and_read_s16
DRWAV += drwav_open_file_and_read_s32
DRWAV += drwav_open_file_ex
DRWAV += drwav_open_file_write
DRWAV += drwav_open_file_write
DRWAV += drwav_open_file_write__internal
DRWAV += drwav_open_file_write__internal
DRWAV += drwav_open_file_write_sequential
DRWAV += drwav_open_file_write_sequential
DRWAV += drwav_open_memory
DRWAV += drwav_open_memory_and_read_f32
DRWAV += drwav_open_memory_and_read_pcm_frames_f32
DRWAV += drwav_open_memory_and_read_pcm_frames_s16
DRWAV += drwav_open_memory_and_read_pcm_frames_s32
DRWAV += drwav_open_memory_and_read_s16
DRWAV += drwav_open_memory_and_read_s32
DRWAV += drwav_open_memory_ex
DRWAV += drwav_open_memory_write
DRWAV += drwav_open_memory_write
DRWAV += drwav_open_memory_write__internal
DRWAV += drwav_open_memory_write__internal
DRWAV += drwav_open_memory_write_sequential
DRWAV += drwav_open_write
DRWAV += drwav_open_write
DRWAV += drwav_open_write__internal
DRWAV += drwav_open_write_sequential
DRWAV += drwav_read
DRWAV += drwav_read_f32
DRWAV += drwav_read_f32__alaw
DRWAV += drwav_read_f32__alaw
DRWAV += drwav_read_f32__ieee
DRWAV += drwav_read_f32__ieee
DRWAV += drwav_read_f32__ima
DRWAV += drwav_read_f32__ima
DRWAV += drwav_read_f32__msadpcm
DRWAV += drwav_read_f32__msadpcm
DRWAV += drwav_read_f32__mulaw
DRWAV += drwav_read_f32__mulaw
DRWAV += drwav_read_f32__pcm
DRWAV += drwav_read_f32__pcm
DRWAV += drwav_read_pcm_frames
DRWAV += drwav_read_pcm_frames_be
DRWAV += drwav_read_pcm_frames_f32
DRWAV += drwav_read_pcm_frames_f32be
DRWAV += drwav_read_pcm_frames_f32le
DRWAV += drwav_read_pcm_frames_le
DRWAV += drwav_read_pcm_frames_s16
DRWAV += drwav_read_pcm_frames_s16be
DRWAV += drwav_read_pcm_frames_s16le
DRWAV += drwav_read_pcm_frames_s32
DRWAV += drwav_read_pcm_frames_s32be
DRWAV += drwav_read_pcm_frames_s32le
DRWAV += drwav_read_raw
DRWAV += drwav_read_s16
DRWAV += drwav_read_s16__alaw
DRWAV += drwav_read_s16__ieee
DRWAV += drwav_read_s16__ima
DRWAV += drwav_read_s16__msadpcm
DRWAV += drwav_read_s16__mulaw
DRWAV += drwav_read_s16__pcm
DRWAV += drwav_read_s32
DRWAV += drwav_read_s32__alaw
DRWAV += drwav_read_s32__alaw
DRWAV += drwav_read_s32__ieee
DRWAV += drwav_read_s32__ieee
DRWAV += drwav_read_s32__ima
DRWAV += drwav_read_s32__ima
DRWAV += drwav_read_s32__msadpcm
DRWAV += drwav_read_s32__msadpcm
DRWAV += drwav_read_s32__mulaw
DRWAV += drwav_read_s32__mulaw
DRWAV += drwav_read_s32__pcm
DRWAV += drwav_read_s32__pcm
DRWAV += drwav_riff_chunk_size_riff
DRWAV += drwav_riff_chunk_size_w64
DRWAV += drwav_s16_to_f32
DRWAV += drwav_s16_to_s32
DRWAV += drwav_s24_to_f32
DRWAV += drwav_s24_to_s16
DRWAV += drwav_s24_to_s16
DRWAV += drwav_s24_to_s32
DRWAV += drwav_s32_to_f32
DRWAV += drwav_s32_to_s16
DRWAV += drwav_s32_to_s16
DRWAV += drwav_seek_to_pcm_frame
DRWAV += drwav_seek_to_sample
DRWAV += drwav_seek_to_sample
DRWAV += drwav_smpl
DRWAV += drwav_smpl_loop
DRWAV += drwav_take_ownership_of_metadata
DRWAV += drwav_target_write_size_bytes
DRWAV += drwav_u8_to_f32
DRWAV += drwav_u8_to_s16
DRWAV += drwav_u8_to_s16
DRWAV += drwav_u8_to_s32
DRWAV += drwav_uninit
DRWAV += drwav_version
DRWAV += drwav_version_string
DRWAV += drwav_write
DRWAV += drwav_write
DRWAV += drwav_write_pcm_frames
DRWAV += drwav_write_pcm_frames_be
DRWAV += drwav_write_pcm_frames_le
DRWAV += drwav_write_raw

# --------------------------------------------------------------
# Files to build

PLUGIN_FILES = plugins.cpp
# MINIPLUGIN_FILES = plugins-mini.cpp

# --------------------------------------------------------------
# Cardinal (built-in)

PLUGIN_FILES += Cardinal/src/AIDA-X.cpp
PLUGIN_FILES += Cardinal/src/Blank.cpp
PLUGIN_FILES += Cardinal/src/ExpanderInputMIDI.cpp
PLUGIN_FILES += Cardinal/src/ExpanderOutputMIDI.cpp
PLUGIN_FILES += Cardinal/src/HostAudio.cpp
PLUGIN_FILES += Cardinal/src/HostCV.cpp
PLUGIN_FILES += Cardinal/src/HostMIDI.cpp
PLUGIN_FILES += Cardinal/src/HostMIDI-CC.cpp
PLUGIN_FILES += Cardinal/src/HostMIDI-Gate.cpp
PLUGIN_FILES += Cardinal/src/HostMIDI-Map.cpp
PLUGIN_FILES += Cardinal/src/HostParameters.cpp
PLUGIN_FILES += Cardinal/src/HostParameters-Map.cpp
PLUGIN_FILES += Cardinal/src/HostTime.cpp
PLUGIN_FILES += Cardinal/src/TextEditor.cpp


ifneq ($(USE_GLES2),true)
ifneq ($(USE_GLES3),true)
PLUGIN_FILES += Cardinal/src/glBars.cpp
endif
endif

ifneq ($(STATIC_BUILD),true)
PLUGIN_FILES += Cardinal/src/AudioFile.cpp
ifneq ($(WASM),true)
PLUGIN_FILES += Cardinal/src/Carla.cpp
PLUGIN_FILES += Cardinal/src/Ildaeil.cpp
endif
ifneq ($(HEADLESS),true)
ifeq ($(HAVE_X11),true)
PLUGIN_FILES += Cardinal/src/EmbedWidget.cpp
PLUGIN_FILES += Cardinal/src/MPV.cpp
endif
endif
endif

ifneq ($(HEADLESS),true)
PLUGIN_FILES += Cardinal/src/ImGuiWidget.cpp
PLUGIN_FILES += Cardinal/src/ImGuiTextEditor.cpp
PLUGIN_FILES += Cardinal/src/SassyScope.cpp
PLUGIN_FILES += Cardinal/src/DearImGui.cpp
PLUGIN_FILES += Cardinal/src/DearImGuiColorTextEditor.cpp
MINIPLUGIN_FILES += Cardinal/src/ImGuiWidget.cpp
MINIPLUGIN_FILES += Cardinal/src/ImGuiTextEditor.cpp
MINIPLUGIN_FILES += Cardinal/src/DearImGui.cpp
MINIPLUGIN_FILES += Cardinal/src/DearImGuiColorTextEditor.cpp
endif

ifeq ($(shell $(PKG_CONFIG) --exists fftw3f && echo true),true)
PLUGIN_FILES += Cardinal/src/AudioToCVPitch.cpp
# MINIPLUGIN_FILES += Cardinal/src/AudioToCVPitch.cpp
endif

# --------------------------------------------------------------
# Fundamental (always enabled)

PLUGIN_FILES += $(filter-out Fundamental/src/plugin.cpp,$(wildcard Fundamental/src/*.cpp))
PLUGIN_FILES += Fundamental/src/dr_wav.c

# modules/types which are present in other plugins
FUNDAMENTAL_CUSTOM = $(DRWAV)

# --------------------------------------------------------------


# --------------------------------------------------------------
# Befaco

PLUGIN_FILES += $(filter-out Befaco/src/plugin.cpp,$(wildcard Befaco/src/*.cpp))
PLUGIN_FILES += $(wildcard Befaco/src/noise-plethora/*/*.cpp)

# modules/types which are present in other plugins
BEFACO_CUSTOM = ADSR Mixer chowdsp Burst


# --------------------------------------------------------------
# BogaudioModules

PLUGIN_FILES += $(filter-out BogaudioModules/src/bogaudio.cpp,$(wildcard BogaudioModules/src/*.cpp))
PLUGIN_FILES += $(wildcard BogaudioModules/src/dsp/*.cpp)
PLUGIN_FILES += $(wildcard BogaudioModules/src/dsp/filters/*.cpp)



# modules/types which are present in other plugins
BOGAUDIO_CUSTOM = ADSR BlueNoiseGenerator LFO Noise VCA VCO VCF
BOGAUDIO_CUSTOM_PER_FILE = ARQuantity AttackMenuItem ReleaseMenuItem


# --------------------------------------------------------------
# H4N4 Modules

PLUGIN_FILES += $(filter-out h4n4-modules/src/plugin.cpp,$(wildcard h4n4-modules/src/*.cpp))



# --------------------------------------------------------------
# Build setup

ifeq ($(HEADLESS),true)
BUILD_DIR = ../build-headless/plugins
else
BUILD_DIR = ../build/plugins
endif

BASE_FLAGS += -DBUILDING_PLUGIN_MODULES
BASE_FLAGS += -DDONT_SET_USING_DISTRHO_NAMESPACE
BASE_FLAGS += -I$(abspath $(ROOT)/include/osdialog-stub)

ifeq ($(BSD)$(WASM),true)
BASE_FLAGS += -D'aligned_alloc_16(ptr)'='aligned_alloc(16,ptr)'
BASE_FLAGS += -D'aligned_free_16(ptr)'='free(ptr)'
endif

ifeq ($(WASM),true)
BASE_FLAGS += -DEIGEN_DONT_VECTORIZE=1
endif

ifeq ($(shell $(PKG_CONFIG) --exists fftw3f && echo true),true)
BASE_FLAGS += -DHAVE_FFTW3F
endif

ifeq ($(shell $(PKG_CONFIG) --exists sndfile && echo true),true)
BASE_FLAGS += -DHAVE_SNDFILE
endif

ifeq ($(HAVE_X11),true)
BASE_FLAGS += -DHAVE_X11
endif

# --------------------------------------------------------------
# lots of warnings from plugins

BASE_FLAGS += -Wno-deprecated-declarations

ifeq ($(MACOS),true)
BASE_FLAGS += -Wno-unknown-warning-option
endif

# --------------------------------------------------------------
# Carla and friends build flags

CARLA_FLAGS = \
	-DCARLA_BACKEND_NAMESPACE=Cardinal \
	-DREAL_BUILD \
	-DSTATIC_PLUGIN_TARGET \
	-I../deps/aubio/src \
	-I../carla/source/backend \
	-I../carla/source/includes \
	-I../carla/source/modules \
	-I../carla/source/utils

ifeq ($(WASM),true)
CARLA_FLAGS += -DDISTRHO_RUNNER_INDIRECT_WASM_CALLS
endif

# --------------------------------------------------------------
# RTNeural flags, used in AIDA-X

RTNEURAL_FLAGS  = -std=gnu++17
RTNEURAL_FLAGS += -DBiquad=AidaBiquad
RTNEURAL_FLAGS += -DEigen=Aida_Eigen
RTNEURAL_FLAGS += -Dconst_blas_data_mapper=Aida_const_blas_data_mapper
RTNEURAL_FLAGS += -Devaluator=Aida_evaluator
RTNEURAL_FLAGS += -DSKIP_MINGW_FORMAT
RTNEURAL_FLAGS += -DRTNEURAL_DEFAULT_ALIGNMENT=16
RTNEURAL_FLAGS += -DRTNEURAL_USE_EIGEN=1

RTNEURAL_FLAGS += -ICardinal/src/AIDA-X/RTNeural
RTNEURAL_FLAGS += -ICardinal/src/AIDA-X/RTNeural/modules/Eigen

# --------------------------------------------------------------
# Build targets

ifeq ($(HEADLESS),true)
TARGET_SUFFIX = -headless
endif

TARGETS = plugins$(TARGET_SUFFIX).a plugins-mini$(TARGET_SUFFIX).a

all: $(TARGETS)
ifneq ($(HEADLESS),true)
	$(MAKE) HEADLESS=true plugins-mini-headless.a
endif

clean:
	rm -f *.a
	rm -rf $(BUILD_DIR)
	rm -rf surgext/build

# --------------------------------------------------------------

PLUGIN_LIST = $(subst /plugin.json,,$(wildcard */plugin.json))

UNWANTED_FILES  = HetrickCV/res/illustrator - deprecated/MyModule.svg
UNWANTED_FILES += $(wildcard Meander/res/*)
UNWANTED_FILES += $(wildcard Mog/res/*)
UNWANTED_FILES += $(wildcard Mog/res/*/*)
UNWANTED_FILES += $(wildcard nonlinearcircuits/res/*)

RESOURCE_FILES = \
	$(filter-out $(UNWANTED_FILES), \
		$(wildcard */res/*.svg) \
		$(wildcard */res/*/*.svg) \
		$(wildcard */res/*/*/*.svg) \
		$(wildcard */res/*/*/*/*.svg) \
		$(wildcard */res/*/*/*/*/*.svg) \
		$(wildcard */res/*.otf) \
		$(wildcard */res/*/*.otf) \
		$(wildcard */res/*/*/*.otf) \
		$(wildcard */res/*.ttf) \
		$(wildcard */res/*/*.ttf) \
		$(wildcard */res/*/*/*.ttf))

RESOURCE_FILES += $(wildcard */presets)

RESOURCE_FILES += Befaco/res/SpringReverbIR.f32


# RESOURCE_FILES += $(wildcard unless_modules/manual/*)

JACK_RESOURCES  = $(CURDIR)/surgext/build/surge-data/configuration.xml
JACK_RESOURCES += $(CURDIR)/surgext/build/surge-data/fx_presets
JACK_RESOURCES += $(CURDIR)/surgext/build/surge-data/wavetables
JACK_RESOURCES += $(CURDIR)/surgext/build/surge-data/windows.wt

RESOURCE_FILES += $(wildcard Cardinal/res/*.png)
RESOURCE_FILES += Cardinal/res/Miku/Miku.png

# MOD builds only have LV2 main and FX variant
ifeq ($(MOD_BUILD),true)

LV2_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.lv2/resources/PluginManifests/%.json)
#LV2_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalFX.lv2/resources/PluginManifests/%.json)
#LV2_RESOURCES += $(MINIPLUGIN_LIST:%=../bin/CardinalMini.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.lv2/resources/%)

#LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalFX.lv2/resources/%)
#LV2_RESOURCES += $(MINIRESOURCE_FILES:%=../bin/CardinalMini.lv2/resources/%)

# MOD builds only have LV2 FX variant for now
else ifeq ($(WASM),true)

LV2_RESOURCES  = $(PLUGIN_LIST:%=../bin/CardinalNative.lv2/resources/PluginManifests/%.json)
#LV2_RESOURCES += $(MINIPLUGIN_LIST:%=../bin/CardinalMini.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalNative.lv2/resources/%)
#LV2_RESOURCES += $(MINIRESOURCE_FILES:%=../bin/CardinalMini.lv2/resources/%)

else

LV2_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalFX.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(MINIPLUGIN_LIST:%=../bin/CardinalMini.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalSynth.lv2/resources/PluginManifests/%.json)
LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.lv2/resources/%)
LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalFX.lv2/resources/%)
LV2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalSynth.lv2/resources/%)
LV2_RESOURCES += $(MINIRESOURCE_FILES:%=../bin/CardinalMini.lv2/resources/%)

ifeq ($(MACOS),true)
VST2_RESOURCES  = $(PLUGIN_LIST:%=../bin/CardinalFX.vst/Contents/Resources/PluginManifests/%.json)
VST2_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalSynth.vst/Contents/Resources/PluginManifests/%.json)
VST2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalFX.vst/Contents/Resources/%)
VST2_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalSynth.vst/Contents/Resources/%)
CLAP_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.clap/Contents/Resources/PluginManifests/%.json)
CLAP_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalFX.clap/Contents/Resources/PluginManifests/%.json)
CLAP_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalSynth.clap/Contents/Resources/PluginManifests/%.json)
CLAP_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.clap/Contents/Resources/%)
CLAP_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalFX.clap/Contents/Resources/%)
CLAP_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalSynth.clap/Contents/Resources/%)
else
VST2_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.vst/resources/PluginManifests/%.json)
VST2_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.vst/resources/%)
CLAP_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.clap/resources/PluginManifests/%.json)
CLAP_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.clap/resources/%)
endif

VST3_RESOURCES  = $(PLUGIN_LIST:%=../bin/Cardinal.vst3/Contents/Resources/PluginManifests/%.json)
VST3_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalFX.vst3/Contents/Resources/PluginManifests/%.json)
VST3_RESOURCES += $(PLUGIN_LIST:%=../bin/CardinalSynth.vst3/Contents/Resources/PluginManifests/%.json)
VST3_RESOURCES += $(RESOURCE_FILES:%=../bin/Cardinal.vst3/Contents/Resources/%)
VST3_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalFX.vst3/Contents/Resources/%)
VST3_RESOURCES += $(RESOURCE_FILES:%=../bin/CardinalSynth.vst3/Contents/Resources/%)

endif

resources: $(JACK_RESOURCES) $(LV2_RESOURCES) 

../bin/Cardinal.lv2/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.lv2/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalMini.lv2/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalNative.lv2/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.lv2/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

ifeq ($(MOD_BUILD),true)
../bin/Cardinal.lv2/resources/%.svg: %.svg ../deps/svg2stub.py
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)python3 ../deps/svg2stub.py $< $@

../bin/CardinalFX.lv2/resources/%.svg: %.svg ../deps/svg2stub.py
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)python3 ../deps/svg2stub.py $< $@

../bin/CardinalMini.lv2/resources/%.svg: %.svg ../deps/svg2stub.py
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)python3 ../deps/svg2stub.py $< $@
endif

../bin/Cardinal.lv2/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.lv2/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalMini.lv2/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalNative.lv2/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.lv2/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.vst3/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.vst3/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.vst3/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.vst3/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.vst3/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.vst3/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

ifeq ($(MACOS),true)
../bin/CardinalFX.vst/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.vst/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.vst/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.vst/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.clap/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.clap/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.clap/Contents/Resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.clap/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalFX.clap/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/CardinalSynth.clap/Contents/Resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@
else
../bin/Cardinal.vst/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.vst/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.clap/resources/%: %
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

../bin/Cardinal.clap/resources/PluginManifests/%.json: %/plugin.json
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@
endif

%/surgext/build/surge-data/configuration.xml: surgext/surge/resources/surge-shared/configuration.xml
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

%/surgext/build/surge-data/fx_presets:
	-@mkdir -p "$@"
	cp -R surgext/surge/resources/data/fx_presets/* $@/
	cp -R surgext/res/surge_extra_data/fx_presets/* $@/

%/surgext/build/surge-data/wavetables: surgext/surge/resources/data/wavetables
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

%/surgext/build/surge-data/windows.wt: surgext/surge/resources/surge-shared/windows.wt
	-@mkdir -p "$(shell dirname $@)"
	$(SILENT)ln -sf $(abspath $<) $@

# --------------------------------------------------------------
# Build commands

PLUGIN_OBJS  = $(PLUGIN_FILES:%=$(BUILD_DIR)/%.o)
PLUGIN_OBJS += $(PLUGIN_BINARIES:%=$(BUILD_DIR)/%.bin.o)

.PRECIOUS: $(PLUGIN_BINARIES:%=$(BUILD_DIR)/%.bin.c)

# function for custom module names macro
custom_module_names = -D${1}=${2}${1} -Dmodel${1}=model${2}${1} -D${1}Widget=${2}${1}Widget
custom_per_file_names = -D${1}=${2}_${1}

plugins$(TARGET_SUFFIX).a: $(PLUGIN_OBJS)
	@echo "Creating $@"
	$(SILENT)rm -f $@
	$(SILENT)$(AR) crs $@ $^


$(BUILD_DIR)/%.bin.c: % ../deps/res2c.py
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Generating $*.bin.c"
	$(SILENT)python3 ../deps/res2c.py $< > $@

$(BUILD_DIR)/%.bin.o: $(BUILD_DIR)/%.bin.c
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $*.bin"
	$(SILENT)$(CC) $< $(BUILD_C_FLAGS) -c -o $@

$(BUILD_DIR)/plugins.cpp.o: plugins.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@


$(BUILD_DIR)/noplugins.cpp.o: plugins.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@

$(BUILD_DIR)/Cardinal/%.cpp.o: Cardinal/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		-DpluginInstance=pluginInstance__Cardinal \
		-Dstbrp_context=stbrp_context_cardinal \
		-Dstbrp_coord=stbrp_coord_cardinal \
		-Dstbtt_fontinfo=stbtt_fontinfo_cardinal \
		-Dstbrp_node=stbrp_node_cardinal \
		-Dstbrp_rect=stbrp_rect_cardinal \
		$(CARLA_FLAGS)

$(BUILD_DIR)/Cardinal/src/AIDA-X.cpp.o: Cardinal/src/AIDA-X.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		-DpluginInstance=pluginInstance__Cardinal \
		-Dstbrp_context=stbrp_context_cardinal \
		-Dstbrp_coord=stbrp_coord_cardinal \
		-Dstbtt_fontinfo=stbtt_fontinfo_cardinal \
		-Dstbrp_node=stbrp_node_cardinal \
		-Dstbrp_rect=stbrp_rect_cardinal \
		$(RTNEURAL_FLAGS) \
		$(CARLA_FLAGS)

$(BUILD_DIR)/21kHz/%.cpp.o: 21kHz/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(21KHZ_CUSTOM),$(call custom_module_names,$(m),21kHz)) \
		-DpluginInstance=pluginInstance__21kHz

$(BUILD_DIR)/8Mode/%.cpp.o: 8Mode/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(8MODE_CUSTOM),$(call custom_module_names,$(m),8Mode)) \
		-DpluginInstance=pluginInstance__8Mode

$(BUILD_DIR)/AaronStatic/%.cpp.o: AaronStatic/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AARONSTATIC_CUSTOM),$(call custom_module_names,$(m),AaronStatic)) \
		-DpluginInstance=pluginInstance__AaronStatic \
		-Dinit=init__AaronStatic

$(BUILD_DIR)/alefsbits/%.cpp.o: alefsbits/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ALEFSBITS_CUSTOM),$(call custom_module_names,$(m),alefsbits)) \
		-DpluginInstance=pluginInstance__alefsbits

$(BUILD_DIR)/Algoritmarte/%.cpp.o: Algoritmarte/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ALGORITMARTE_CUSTOM),$(call custom_module_names,$(m),Algoritmarte)) \
		-DpluginInstance=pluginInstance__Algoritmarte

$(BUILD_DIR)/AmalgamatedHarmonics/%.cpp.o: AmalgamatedHarmonics/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AMALGAMATEDHARMONICS_CUSTOM),$(call custom_module_names,$(m),AmalgamatedHarmonics)) \
		-DpluginInstance=pluginInstance__AmalgamatedHarmonics

$(BUILD_DIR)/AnimatedCircuits/%.cpp.o: AnimatedCircuits/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ANIMATEDCIRCUITS_CUSTOM),$(call custom_module_names,$(m),AnimatedCircuits)) \
		-DpluginInstance=pluginInstance__AnimatedCircuits

$(BUILD_DIR)/ArableInstruments/%.o: ArableInstruments/%
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ARABLE_CUSTOM),$(call custom_module_names,$(m),Arable)) \
		-DpluginInstance=pluginInstance__ArableInstruments \
		-DTEST \
		-IArableInstruments/eurorack \
		-Wno-class-memaccess \
		-Wno-unused-local-typedefs

$(BUILD_DIR)/AriaModules/%.cpp.o: AriaModules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ARIA_CUSTOM),$(call custom_module_names,$(m),Aria)) \
		-DpluginInstance=pluginInstance__Aria \
		-Wno-cast-function-type

$(BUILD_DIR)/AS/%.cpp.o: AS/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AS_CUSTOM),$(call custom_module_names,$(m),AS)) \
		$(foreach m,$(AS_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),AS_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__AS \
		-Wno-unused-private-field

$(BUILD_DIR)/AudibleInstruments/%.o: AudibleInstruments/%
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AUDIBLEINSTRUMENTS_CUSTOM),$(call custom_module_names,$(m),AudibleInstruments)) \
		-DpluginInstance=pluginInstance__AudibleInstruments \
		-DTEST \
		-IAudibleInstruments/eurorack \
		-Wno-class-memaccess \
		-Wno-unused-local-typedefs

$(BUILD_DIR)/Autinn/%.cpp.o: Autinn/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AUTINN_CUSTOM),$(call custom_module_names,$(m),Autinn)) \
		-DpluginInstance=pluginInstance__Autinn \
		-Dinit=init__Autinn

$(BUILD_DIR)/Axioma/%.cpp.o: Axioma/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(AXIOMA_CUSTOM),$(call custom_module_names,$(m),Axioma)) \
		-DpluginInstance=pluginInstance__Axioma

$(BUILD_DIR)/BaconPlugs/%.cpp.o: BaconPlugs/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -std=gnu++17 -c -o $@ \
		$(foreach m,$(BACON_CUSTOM),$(call custom_module_names,$(m),BaconPlugs)) \
		-DpluginInstance=pluginInstance__Bacon \
		-DDARK_BACON \
		-IBaconPlugs/libs/midifile/include \
		-IBaconPlugs/libs/open303-code/Source/DSPCode \
		-Wno-array-bounds \
		-Wno-strict-aliasing

$(BUILD_DIR)/Befaco/%.cpp.o: Befaco/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(BEFACO_CUSTOM),$(call custom_module_names,$(m),Befaco)) \
		-DpluginInstance=pluginInstance__Befaco

$(BUILD_DIR)/Bidoo%.cpp.o: Bidoo%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(BIDOO_CUSTOM),$(call custom_module_names,$(m),Bidoo)) \
		$(foreach m,$(BIDOO_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),Bidoo_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__Bidoo \
		-DSKIP_MINGW_FORMAT \
		-IBidoo/src/dep/gverb/include \
		-Wno-ignored-qualifiers \
		-Wno-sign-compare \
		-Wno-unused-function

$(BUILD_DIR)/Biset/src/%.cpp.o: Biset/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(BISET_CUSTOM),$(call custom_module_names,$(m),Biset)) \
		-DpluginInstance=pluginInstance__Biset

$(BUILD_DIR)/BogaudioModules/src/follower_base.cpp.o: BogaudioModules/src/follower_base.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(BOGAUDIO_CUSTOM),$(call custom_module_names,$(m),Bogaudio)) \
		-DpluginInstance=pluginInstance__BogaudioModules \
		-DefGainMaxDecibels=efGainMaxDecibelsDebug \
		-DRACK_SIMD=1 \
		-DSKIP_MINGW_FORMAT \
		-IBogaudioModules/lib \
		-IBogaudioModules/src/dsp

$(BUILD_DIR)/BogaudioModules/%.cpp.o: BogaudioModules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(BOGAUDIO_CUSTOM),$(call custom_module_names,$(m),Bogaudio)) \
		$(foreach m,$(BOGAUDIO_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),Bogaudio_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__BogaudioModules \
		-DRACK_SIMD=1 \
		-DSKIP_MINGW_FORMAT \
		-IBogaudioModules/lib \
		-IBogaudioModules/src/dsp

$(BUILD_DIR)/CatroModulo/src/%.cpp.o: CatroModulo/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(CATROMODULO_CUSTOM),$(call custom_module_names,$(m),CatroModulo)) \
		-DpluginInstance=pluginInstance__CatroModulo

$(BUILD_DIR)/cf/src/%.cpp.o: cf/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(CF_CUSTOM),$(call custom_module_names,$(m),cf)) \
		-DpluginInstance=pluginInstance__cf \
		-Wno-misleading-indentation

$(BUILD_DIR)/Computerscare/src/%.cpp.o: Computerscare/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(COMPUTERSCARE_CUSTOM),$(call custom_module_names,$(m),Computerscare)) \
		-DpluginInstance=pluginInstance__Computerscare

$(BUILD_DIR)/CVfunk/src/%.cpp.o: CVfunk/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(CVFUNK_CUSTOM),$(call custom_module_names,$(m),CVfunk)) \
		-DpluginInstance=pluginInstance__CVfunk

$(BUILD_DIR)/ChowDSP/%.cpp.o: ChowDSP/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(CHOWDSP_CUSTOM),$(call custom_module_names,$(m),ChowDSP)) \
		-DpluginInstance=pluginInstance__ChowDSP \
		-DUSE_EIGEN \
		-DSKIP_MINGW_FORMAT \
		-IChowDSP/lib \
		-IChowDSP/lib/chowdsp_utils/modules/chowdsp_dsp/WDF \
		-Wno-deprecated-copy

$(BUILD_DIR)/dBiz/src/%.cpp.o: dBiz/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(DBIZ_CUSTOM),$(call custom_module_names,$(m),dBiz)) \
		$(foreach m,$(DBIZ_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),dBiz_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__dBiz

$(BUILD_DIR)/DHE-Modules/src/%.cpp.o: DHE-Modules/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(DHE_CUSTOM),$(call custom_module_names,$(m),DHE)) \
		-DpluginInstance=pluginInstance__DHE \
		-IDHE-Modules/src

$(BUILD_DIR)/DrumKit/%.cpp.o: DrumKit/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(DRUMKIT_CUSTOM),$(call custom_module_names,$(m),DrumKit)) \
		-DpluginInstance=pluginInstance__DrumKit \
		-Dinit=init__DrumKit \
		-Wno-sign-compare

$(BUILD_DIR)/EnigmaCurry/src/%.cpp.o: EnigmaCurry/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ENIGMACURRY_CUSTOM),$(call custom_module_names,$(m),EnigmaCurry)) \
		-DpluginInstance=pluginInstance__EnigmaCurry \
		-Wno-misleading-indentation

$(BUILD_DIR)/ESeries/%.cpp.o: ESeries/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ESERIES_CUSTOM),$(call custom_module_names,$(m),ESeries)) \
		-DpluginInstance=pluginInstance__ESeries

$(BUILD_DIR)/ExpertSleepers-Encoders/src/%.cpp.o: ExpertSleepers-Encoders/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(EXPERTSLEEPERS_ENCODERS_CUSTOM),$(call custom_module_names,$(m),ExpertSleepersEncoders)) \
		-DpluginInstance=pluginInstance__ExpertSleepersEncoders

$(BUILD_DIR)/Extratone/src/%.cpp.o: Extratone/src/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(EXTRATONE_CUSTOM),$(call custom_module_names,$(m),Extratone)) \
		-DpluginInstance=pluginInstance__Extratone

$(BUILD_DIR)/FehlerFabrik/%.cpp.o: FehlerFabrik/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(FEHLERFABRIK_CUSTOM),$(call custom_module_names,$(m),FehlerFabrik)) \
		-DpluginInstance=pluginInstance__FehlerFabrik

$(BUILD_DIR)/forsitan-modulare/%.cpp.o: forsitan-modulare/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(FORSITAN_CUSTOM),$(call custom_module_names,$(m),forsitan)) \
		-DpluginInstance=pluginInstance__forsitan

$(BUILD_DIR)/Fundamental/%.c.o: Fundamental/%.c
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CC) $< $(BUILD_C_FLAGS) -c -o $@ \
		$(foreach m,$(FUNDAMENTAL_CUSTOM),$(call custom_module_names,$(m),Fundamental)) \
		-DpluginInstance=pluginInstance__Fundamental

$(BUILD_DIR)/Fundamental/%.cpp.o: Fundamental/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(FUNDAMENTAL_CUSTOM),$(call custom_module_names,$(m),Fundamental)) \
		-DpluginInstance=pluginInstance__Fundamental

$(BUILD_DIR)/Fundamental/src/Scope.cpp.o: Fundamental/src/Scope.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(FUNDAMENTAL_CUSTOM),$(call custom_module_names,$(m),Fundamental)) \
		-DpluginInstance=pluginInstance__Fundamental

$(BUILD_DIR)/GlueTheGiant/%.cpp.o: GlueTheGiant/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(GLUETHEGIANT_CUSTOM),$(call custom_module_names,$(m),GlueTheGiant)) \
		-DpluginInstance=pluginInstance__GlueTheGiant

$(BUILD_DIR)/GlueTheGiant/src/gtgComponents.cpp.o: GlueTheGiant/src/gtgComponents.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(GLUETHEGIANT_CUSTOM),$(call custom_module_names,$(m),GlueTheGiant)) \
		-DpluginInstance=pluginInstance__GlueTheGiant \
		-DloadGtgPluginDefault=ignoredGlueTheGiant1 \
		-DsaveGtgPluginDefault=ignoredGlueTheGiant2

$(BUILD_DIR)/GoodSheperd/%.cpp.o: GoodSheperd/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(GOODSHEPERD_CUSTOM),$(call custom_module_names,$(m),GoodSheperd)) \
		-DpluginInstance=pluginInstance__GoodSheperd

$(BUILD_DIR)/GrandeModular/%.cpp.o: GrandeModular/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(GRANDEMODULAR_CUSTOM),$(call custom_module_names,$(m),GrandeModular)) \
		-DpluginInstance=pluginInstance__GrandeModular \
		-Wno-missing-braces \
		-Wno-narrowing \
		-Wno-self-assign

$(BUILD_DIR)/h4n4-modules/%.cpp.o: h4n4-modules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(H4N4_CUSTOM),$(call custom_module_names,$(m),H4N4)) \
		-DpluginInstance=pluginInstance__H4N4

$(BUILD_DIR)/HamptonHarmonics/%.cpp.o: HamptonHarmonics/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(HAMPTONHARMONICS_CUSTOM),$(call custom_module_names,$(m),HamptonHarmonics)) \
		-DpluginInstance=pluginInstance__HamptonHarmonics

$(BUILD_DIR)/HetrickCV/%.cpp.o: HetrickCV/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(HETRICKCV_CUSTOM),$(call custom_module_names,$(m),HetrickCV)) \
		-DpluginInstance=pluginInstance__HetrickCV \
		-DSTDIO_OVERRIDE=HetrickCV \
		-IHetrickCV/Gamma \
		-Wno-unused-but-set-variable

$(BUILD_DIR)/ImpromptuModular/src/Foundr%.cpp.o: ImpromptuModular/src/Foundr%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(IMPROMPTUMODULAR_CUSTOM),$(call custom_module_names,$(m),ImpromptuModular)) \
		-DpluginInstance=pluginInstance__ImpromptuModular \
		-DStepAttributes=StepAttributesKernel \

$(BUILD_DIR)/ImpromptuModular/src/ImpromptuModular.cpp.o: ImpromptuModular/src/ImpromptuModular.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(IMPROMPTUMODULAR_CUSTOM),$(call custom_module_names,$(m),ImpromptuModular)) \
		-DpluginInstance=pluginInstance__ImpromptuModular \
		-Dinit=init__ImpromptuModular

$(BUILD_DIR)/ImpromptuModular%.cpp.o: ImpromptuModular%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(IMPROMPTUMODULAR_CUSTOM),$(call custom_module_names,$(m),ImpromptuModular)) \
		$(foreach m,$(IMPROMPTUMODULAR_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),ImpromptuModular_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__ImpromptuModular \
		-Wno-format-truncation

$(BUILD_DIR)/ihtsyn/%.cpp.o: ihtsyn/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(IHTSYN_CUSTOM),$(call custom_module_names,$(m),ihtsyn)) \
		$(foreach m,$(IHTSYN_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),ihtsyn_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__ihtsyn

$(BUILD_DIR)/JW-Modules/src/WavHead.cpp.o: JW-Modules/src/WavHead.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(JW_CUSTOM),$(call custom_module_names,$(m),JW)) \
		-DpluginInstance=pluginInstance__JW \
		-D'nvgRGB(r,g,b)=nvgRGBblank(r,g,b)' \
		-IJW-Modules/src \
		-IJW-Modules/lib/oscpack \
		-Wno-misleading-indentation \
		-Wno-unused-but-set-variable \
		-Wno-unused-result

$(BUILD_DIR)/JW-Modules/%.cpp.o: JW-Modules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(JW_CUSTOM),$(call custom_module_names,$(m),JW)) \
		-DpluginInstance=pluginInstance__JW \
		-IJW-Modules/src \
		-IJW-Modules/lib/oscpack \
		-Wno-misleading-indentation \
		-Wno-unused-but-set-variable \
		-Wno-unused-result

$(BUILD_DIR)/kocmoc/%.cpp.o: kocmoc/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(KOCMOC_CUSTOM),$(call custom_module_names,$(m),kocmoc)) \
		-DpluginInstance=pluginInstance__kocmoc

$(BUILD_DIR)/LifeFormModular/%.cpp.o: LifeFormModular/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(LIFEFORMMODULAR_CUSTOM),$(call custom_module_names,$(m),LifeFormModular)) \
		-DpluginInstance=pluginInstance__LifeFormModular

$(BUILD_DIR)/LilacLoop/%.cpp.o: LilacLoop/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(LILACLOOP_CUSTOM),$(call custom_module_names,$(m),LilacLoop)) \
		-DpluginInstance=pluginInstance__LilacLoop \
		-DSKIP_MINGW_FORMAT

$(BUILD_DIR)/LittleUtils/%.cpp.o: LittleUtils/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(LITTLEUTILS_CUSTOM),$(call custom_module_names,$(m),LittleUtils)) \
		-DpluginInstance=pluginInstance__LittleUtils

$(BUILD_DIR)/LomasModules/%.cpp.o: LomasModules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(LOMAS_CUSTOM),$(call custom_module_names,$(m),Lomas)) \
		-DpluginInstance=pluginInstance__Lomas

$(BUILD_DIR)/LyraeModules/%.cpp.o: LyraeModules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(LYRAE_CUSTOM),$(call custom_module_names,$(m),Lyrae)) \
		-DpluginInstance=pluginInstance__Lyrae

$(BUILD_DIR)/Meander/src/Meander.cpp.o: Meander/src/Meander.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MEANDER_CUSTOM),$(call custom_module_names,$(m),Meander)) \
		-DpluginInstance=pluginInstance__Meander \
		-Wno-format-security \
		-Wno-format-zero-length

$(BUILD_DIR)/MindMeldModular/src/MindMeldModular.cpp.o: MindMeldModular/src/MindMeldModular.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MINDMELD_CUSTOM),$(call custom_module_names,$(m),MindMeld)) \
		-DpluginInstance=pluginInstance__MindMeld \
		-Dinit=init__MindMeld

$(BUILD_DIR)/MindMeldModular/%.cpp.o: MindMeldModular/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MINDMELD_CUSTOM),$(call custom_module_names,$(m),MindMeld)) \
		-DpluginInstance=pluginInstance__MindMeld

$(BUILD_DIR)/ML_modules/%.cpp.o: ML_modules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ML_CUSTOM),$(call custom_module_names,$(m),ML)) \
		-DpluginInstance=pluginInstance__ML

$(BUILD_DIR)/MockbaModular/%.cpp.o: MockbaModular/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MOCKBAMODULAR_CUSTOM),$(call custom_module_names,$(m),MockbaModular)) \
		-DpluginInstance=pluginInstance__MockbaModular

$(BUILD_DIR)/Mog/%.cpp.o: Mog/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MOG_CUSTOM),$(call custom_module_names,$(m),Mog)) \
		-DpluginInstance=pluginInstance__Mog

$(BUILD_DIR)/mscHack/%.cpp.o: mscHack/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MSCHACK_CUSTOM),$(call custom_module_names,$(m),mscHack)) \
		$(foreach m,$(MSCHACK_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),mscHack_$(shell basename $*))) \
		-DthePlugin=pluginInstance__mscHack \
		-Dinit=init__mscHack \
		-Wno-class-memaccess \
		-Wno-format-overflow \
		-Wno-non-c-typedef-for-linkage \
		-Wno-unused-but-set-variable

$(BUILD_DIR)/MSM/%.cpp.o: MSM/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MSM_CUSTOM),$(call custom_module_names,$(m),MSM)) \
		-DpluginInstance=pluginInstance__MSM

$(BUILD_DIR)/myth-modules/%.cpp.o: myth-modules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(MYTH_MODULES_CUSTOM),$(call custom_module_names,$(m),myth_modules)) \
		-DpluginInstance=pluginInstance__myth_modules

$(BUILD_DIR)/nonlinearcircuits/%.cpp.o: nonlinearcircuits/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(NONLINEARCIRCUITS_CUSTOM),$(call custom_module_names,$(m),nonlinearcircuits)) \
		-DpluginInstance=pluginInstance__nonlinearcircuits

$(BUILD_DIR)/Orbits/%.cpp.o: Orbits/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ORBITS_CUSTOM),$(call custom_module_names,$(m),Orbits)) \
		-DpluginInstance=pluginInstance__Orbits

$(BUILD_DIR)/ParableInstruments/%.o: ParableInstruments/%
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(PARABLE_CUSTOM),$(call custom_module_names,$(m),Parable)) \
		-DpluginInstance=pluginInstance__ParableInstruments \
		-DPARASITES \
		-DTEST \
		-IArableInstruments/parasites \
		-Wno-class-memaccess \
		-Wno-unused-local-typedefs

$(BUILD_DIR)/PathSet/%.cpp.o: PathSet/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(PATHSET_CUSTOM),$(call custom_module_names,$(m),PathSet)) \
		-DpluginInstance=pluginInstance__PathSet

$(BUILD_DIR)/PdArray/%.cpp.o: PdArray/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(PDARRAY_CUSTOM),$(call custom_module_names,$(m),PdArray)) \
		-DpluginInstance=pluginInstance__PdArray

$(BUILD_DIR)/PinkTrombone/%.cpp.o: PinkTrombone/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(PINKTROMBONE_CUSTOM),$(call custom_module_names,$(m),PinkTrombone)) \
		-DpluginInstance=pluginInstance__PinkTrombone

$(BUILD_DIR)/Prism/%.cpp.o: Prism/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(PRISM_CUSTOM),$(call custom_module_names,$(m),Prism)) \
		$(foreach m,$(PRISM_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),Prism_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__Prism \

$(BUILD_DIR)/rackwindows/%.cpp.o: rackwindows/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(RACKWINDOWS_CUSTOM),$(call custom_module_names,$(m),rackwindows)) \
		-DpluginInstance=pluginInstance__rackwindows \
		-Wno-implicit-fallthrough \
		-Wno-sign-compare

$(BUILD_DIR)/RebelTech/%.cpp.o: RebelTech/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(REBELTECH_CUSTOM),$(call custom_module_names,$(m),RebelTech)) \
		-DpluginInstance=pluginInstance__RebelTech

$(BUILD_DIR)/repelzen/%.cpp.o: repelzen/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(REPELZEN_CUSTOM),$(call custom_module_names,$(m),repelzen)) \
		-DpluginInstance=pluginInstance__repelzen

$(BUILD_DIR)/Sapphire/%.cpp.o: Sapphire/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -std=gnu++17 -c -o $@ \
		$(foreach m,$(SAPPHIRE_CUSTOM),$(call custom_module_names,$(m),Sapphire)) \
		-DpluginInstance=pluginInstance__sapphire

$(BUILD_DIR)/sonusmodular/%.cpp.o: sonusmodular/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(SONUSMODULAR_CUSTOM),$(call custom_module_names,$(m),sonusmodular)) \
		-DpluginInstance=pluginInstance__sonusmodular

$(BUILD_DIR)/StarlingVia/%.cpp.o: StarlingVia/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(STARLINGVIA_CUSTOM),$(call custom_module_names,$(m),StarlingVia)) \
		-DpluginInstance=pluginInstance__StarlingVia \
		-DBUILD_VIRTUAL \
		-IStarlingVia/dep/starling-dsp \
		-IStarlingVia/Via/modules/inc \
		-IStarlingVia/Via/synthesis/inc \
		-IStarlingVia/Via/io/inc \
		-IStarlingVia/Via/ui/inc \
		-IStarlingVia/src/dep/starling-dsp \
		-IStarlingVia/src/dep/starling-rack-ui

$(BUILD_DIR)/stoermelder-packone/%.cpp.o: stoermelder-packone/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(STOERMELDER_PACKONE_CUSTOM),$(call custom_module_names,$(m),stoermelder_p1)) \
		$(foreach m,$(STOERMELDER_PACKONE_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),stoermelder_p1_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__stoermelder_p1 \
		-Dinit=init__stoermelder_p1

$(BUILD_DIR)/stocaudio/%.cpp.o: stocaudio/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(STOCAUDIO_CUSTOM),$(call custom_module_names,$(m),stocaudio)) \
		-DpluginInstance=pluginInstance__stocaudio

$(BUILD_DIR)/surgext%.cpp.o: surgext%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(SURGEXT_FLAGS) -c -o $@ \
		$(foreach m,$(SURGEXT_CUSTOM),$(call custom_module_names,$(m),surgext)) \
		-DpluginInstance=pluginInstance__surgext

$(BUILD_DIR)/unless_modules/%.cpp.o: unless_modules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(UNLESS_MODULES_CUSTOM),$(call custom_module_names,$(m),unless_modules)) \
		-DpluginInstance=pluginInstance__unless_modules

$(BUILD_DIR)/ValleyAudio/%.cpp.o: ValleyAudio/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(VALLEYAUDIO_CUSTOM),$(call custom_module_names,$(m),ValleyAudio)) \
		$(foreach m,$(VALLEYAUDIO_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),ValleyAudio_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__ValleyAudio \
		-DSTDIO_OVERRIDE=ValleyAudio \
		-IValleyAudio/src \
		-Wno-sign-compare \
		-Wno-unused-but-set-variable

$(BUILD_DIR)/voxglitch/%.cpp.o: voxglitch/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(VOXGLITCH_CUSTOM),$(call custom_module_names,$(m),Voxglitch)) \
		$(foreach m,$(VOXGLITCH_CUSTOM_PER_FILE),$(call custom_per_file_names,$(m),Voxglitch_$(shell basename $*))) \
		-DpluginInstance=pluginInstance__Voxglitch \
		-DSKIP_MINGW_FORMAT

$(BUILD_DIR)/WhatTheRack/%.cpp.o: WhatTheRack/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(WHATTHERACK_CUSTOM),$(call custom_module_names,$(m),WhatTheRack)) \
		-DpluginInstance=pluginInstance__WhatTheRack

$(BUILD_DIR)/ZamAudio/%.cpp.o: ZamAudio/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ZAMAUDIO_CUSTOM),$(call custom_module_names,$(m),ZamAudio)) \
		-DpluginInstance=pluginInstance__ZamAudio

$(BUILD_DIR)/ZetaCarinaeModules/%.cpp.o: ZetaCarinaeModules/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ZETACARINAE_CUSTOM),$(call custom_module_names,$(m),ZetaCarinae)) \
		-DpluginInstance=pluginInstance__ZetaCarinaeModules

$(BUILD_DIR)/ZZC/%.cpp.o: ZZC/%.cpp
	-@mkdir -p "$(shell dirname $(BUILD_DIR)/$<)"
	@echo "Compiling $<"
	$(SILENT)$(CXX) $< $(BUILD_CXX_FLAGS) -c -o $@ \
		$(foreach m,$(ZZC_CUSTOM),$(call custom_module_names,$(m),ZZC)) \
		-DpluginInstance=pluginInstance__ZZC

# --------------------------------------------------------------

-include $(PLUGIN_OBJS:%.o=%.d)

# --------------------------------------------------------------

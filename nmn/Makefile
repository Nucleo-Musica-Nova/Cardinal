#!/usr/bin/make -f
# DISTRHO Cardinal Plugin
# Copyright (C) 2021-2024 Filipe Coelho <falktx@falktx.com>
# SPDX-License-Identifier: GPL-3.0-or-later

ROOT = .
include $(ROOT)/Makefile.base.mk

# -----------------------------------------------------------------------------
# Set version

# also set in:
# .github/ISSUE_TEMPLATE/bug.yaml
# src/CardinalCommon.cpp `CARDINAL_VERSION`
# src/CardinalPlugin.cpp `getVersion`
# utils/macOS/Info_{JACK,Native}.plist
# .github/ISSUE_TEMPLATE/bug.yaml src/CardinalCommon.cpp src/CardinalPlugin.cpp utils/macOS/Info_{JACK,Native}.plist
VERSION = 24.04

# --------------------------------------------------------------
# Build targets

all: cardinal carla deps dgl plugins gen resources

# --------------------------------------------------------------
# Build config

PREFIX  ?= /usr/local
DESTDIR ?=

# --------------------------------------------------------------
# Carla config

CARLA_EXTRA_ARGS = \
	CARLA_BACKEND_NAMESPACE=Cardinal \
	DGL_NAMESPACE=CardinalDGL \
	HAVE_FFMPEG=false \
	HAVE_FLUIDSYNTH=false \
	HAVE_PROJECTM=false \
	HAVE_ZYN_DEPS=false \
	HAVE_ZYN_UI_DEPS=false

ifneq ($(DEBUG),true)
CARLA_EXTRA_ARGS += EXTERNAL_PLUGINS=true
endif

# --------------------------------------------------------------
# Check for required system-wide dependencies

ifeq ($(SYSDEPS),true)

ifneq ($(shell $(PKG_CONFIG) --exists jansson && echo true),true)
$(error jansson dependency not installed/available)
endif
ifneq ($(shell $(PKG_CONFIG) --exists libarchive && echo true),true)
$(error libarchive dependency not installed/available)
endif
ifneq ($(shell $(PKG_CONFIG) --exists samplerate && echo true),true)
$(error samplerate dependency not installed/available)
endif
ifneq ($(shell $(PKG_CONFIG) --exists speexdsp && echo true),true)
$(error speexdsp dependency not installed/available)
endif

endif

ifeq ($(HEADLESS),true)

ifneq ($(shell $(PKG_CONFIG) --exists liblo && echo true),true)
$(error liblo dependency not installed/available)
endif

endif

# --------------------------------------------------------------
# Check for X11+OpenGL dependencies (unless headless build)

ifneq ($(HAIKU_OR_MACOS_OR_WASM_OR_WINDOWS),true)
ifneq ($(HEADLESS),true)

ifneq ($(HAVE_OPENGL),true)
$(error OpenGL dependency not installed/available)
endif
ifneq ($(HAVE_X11),true)
$(error X11 dependency not installed/available)
endif
ifneq ($(HAVE_XCURSOR),true)
$(warning Xcursor dependency not installed/available)
endif
ifneq ($(HAVE_XEXT),true)
$(warning Xext dependency not installed/available)
endif
ifneq ($(HAVE_XRANDR),true)
$(warning Xrandr dependency not installed/available)
endif

else

CARLA_EXTRA_ARGS += HAVE_DBUS=false
CARLA_EXTRA_ARGS += HAVE_DGL=false
CARLA_EXTRA_ARGS += HAVE_OPENGL=false
CARLA_EXTRA_ARGS += HAVE_X11=false
CARLA_EXTRA_ARGS += HAVE_XCURSOR=false
CARLA_EXTRA_ARGS += HAVE_XEXT=false
CARLA_EXTRA_ARGS += HAVE_XRANDR=false

endif
endif

# --------------------------------------------------------------
# Check for optional system-wide dependencies

ifeq ($(shell $(PKG_CONFIG) --exists fftw3f && echo true),true)
HAVE_FFTW3F = true
else
$(warning fftw3f dependency not installed/available)
endif

# --------------------------------------------------------------
# MOD builds

EXTRA_MOD_FLAGS  = -I../include/single-precision -fsingle-precision-constant -Wno-attributes
ifeq ($(MODDUO),true)
EXTRA_MOD_FLAGS += -mno-unaligned-access
endif
ifeq ($(WITH_LTO),true)
EXTRA_MOD_FLAGS += -ffat-lto-objects
endif

MOD_ENVIRONMENT += HEADLESS=true
MOD_ENVIRONMENT += STATIC_BUILD=true

# --------------------------------------------------------------
# Individual targets

cardinal: carla deps dgl plugins resources
	$(MAKE) all -C src $(CARLA_EXTRA_ARGS)

carla:
ifneq ($(STATIC_BUILD),true)
	$(MAKE) static-plugin -C carla $(CARLA_EXTRA_ARGS) \
		CAN_GENERATE_LV2_TTL=false \
		CUSTOM_DPF_PATH=$(CURDIR)/dpf \
		STATIC_PLUGIN_TARGET=true \
		USING_CUSTOM_DPF=true
endif

carla-win32:
ifneq ($(STATIC_BUILD),true)
	$(MAKE) all -C carla $(CARLA_EXTRA_ARGS) \
		CAN_GENERATE_LV2_TTL=false \
		CUSTOM_DPF_PATH=$(CURDIR)/dpf \
		DGL_NAMESPACE=CardinalDGL \
		HAVE_FRONTEND=true \
		HAVE_PYQT=true \
		HAVE_QT5=true \
		HAVE_QT5PKG=true \
		STATIC_PLUGIN_TARGET=true \
		USING_CUSTOM_DPF=true
ifeq ($(CPU_X86_64),true)
	$(MAKE) win32r -C carla $(CARLA_EXTRA_ARGS) \
		CAN_GENERATE_LV2_TTL=false \
		CUSTOM_DPF_PATH=$(CURDIR)/dpf \
		DGL_NAMESPACE=CardinalDGL \
		HAVE_FRONTEND=true \
		HAVE_PYQT=true \
		HAVE_QT5=true \
		HAVE_QT5PKG=true \
		STATIC_PLUGIN_TARGET=true \
		USING_CUSTOM_DPF=true
endif
endif

deps:
ifeq ($(SYSDEPS),true)
	$(MAKE) quickjs surge -C deps
else
	$(MAKE) all -C deps
endif
ifeq ($(HAVE_FFTW3F),true)
	$(MAKE) all -C deps/aubio
endif

dgl:
ifneq ($(HEADLESS),true)
	$(MAKE) opengl -C dpf/dgl $(DGL_EXTRA_ARGS)
endif

plugins: deps
	$(MAKE) all -C plugins

resources:
	$(MAKE) resources -C plugins

ifneq ($(CROSS_COMPILING),true)
gen: cardinal resources dpf/utils/lv2_ttl_generator
	@$(CURDIR)/dpf/utils/generate-ttl.sh

dpf/utils/lv2_ttl_generator:
	$(MAKE) -C dpf/utils/lv2-ttl-generator
else
gen:
endif

# --------------------------------------------------------------
mini: carla deps dgl plugins resources
	$(MAKE) mini -C src $(CARLA_EXTRA_ARGS)




# --------------------------------------------------------------

.PHONY: carla deps plugins

#---------------------------------------------------------------------------------
# Clear the implicit built in rules
#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------
ifeq ($(strip $(PSL1GHT)),)
$(error "Please set PSL1GHT in your environment by adding export PSL1GHT=<path>")
endif

#---------------------------------------------------------------------------------
# TITLE, APPID, CONTENTID, ICON0, SFOXML before ppu_rules.
#---------------------------------------------------------------------------------
TITLE			:= File Manager
APPID			:= PS3SFM001
CONTENTID		:= UP0001-$(APPID)_00-0000000000000000
ICON0			:= $(CURDIR)/ICON0.PNG
SFOXML			:= $(CURDIR)/SFO.XML

SCETOOL_FLAGS	?=	--self-app-version=0001000000000000  --sce-type=SELF --compress-data=TRUE --self-add-shdrs=TRUE --skip-sections=FALSE --key-revision=1 \
					--self-auth-id=1010000001000003 --self-vendor-id=01000002 --self-fw-version=0003004000000000

include $(PSL1GHT)/ppu_rules

# Additional SCETool flags
SCETOOL_FLAGS	+=	--self-ctrl-flags 4000000000000000000000000000000000000000000000000000000000000002
SCETOOL_FLAGS	+=	--self-cap-flags 00000000000000000000000000000000000000000000007B0000000100000000

#---------------------------------------------------------------------------------
# TARGET is the name of the output
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# INCLUDES is a list of directories containing extra header files
#---------------------------------------------------------------------------------
TARGET		:=	libsfm_ps3
BUILD		:=	build
SOURCES		:=	source
DATA		:=	data
SHADERS		:=	shaders
INCLUDES	:=	include ../include lib/include

#---------------------------------------------------------------------------------
# Any extra libraries we wish to link with the project
#---------------------------------------------------------------------------------
LIBS		:=	../lib/libfatfs.a ../lib/libntfs_ext.a -lsysfs -lfont -lfreetype \
				-lz -ltiny3d -lsimdmath -lgcm_sys -lnet -lio -lsysutil -lrt -llv2 \
				-lsysmodule -lm

#---------------------------------------------------------------------------------
# Options for code generation
#---------------------------------------------------------------------------------
CFLAGS		=	-O2 -Wall -mcpu=cell $(MACHDEP) $(INCLUDE) -DPS3_GEKKO $(DFLAGS) -DLIBBUILD
CXXFLAGS	=	$(CFLAGS)

LDFLAGS		=	$(MACHDEP) -Wl,-Map,$(notdir $@).map

#---------------------------------------------------------------------------------
# List of directories containing libraries. This must be the top level containing
# include and lib
#---------------------------------------------------------------------------------
LIBDIRS	:=

#---------------------------------------------------------------------------------
# No real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------
ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------

export OUTPUT	:=	$(CURDIR)/$(TARGET)

export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
					$(foreach dir,$(DATA),$(CURDIR)/$(dir)) \
					$(foreach dir,$(SHADERS),$(CURDIR)/$(dir))

export DEPSDIR	:=	$(CURDIR)/$(BUILD)

export BUILDDIR	:=	$(CURDIR)/$(BUILD)

#---------------------------------------------------------------------------------
# Automatically build a list of object files for our project
#---------------------------------------------------------------------------------
CFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
sFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
SFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.S)))
BINFILES	:=  $(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.bin)))
VCGFILES	:=	$(foreach dir,$(SHADERS),$(notdir $(wildcard $(dir)/*.vcg)))
FCGFILES	:=	$(foreach dir,$(SHADERS),$(notdir $(wildcard $(dir)/*.fcg)))

VPOFILES	:=	$(VCGFILES:.vcg=.vpo)
FPOFILES	:=	$(FCGFILES:.fcg=.fpo)

#---------------------------------------------------------------------------------
# Use CXX for linking C++ projects, CC for standard C
#---------------------------------------------------------------------------------
ifeq ($(strip $(CPPFILES)),)
	export LD	:=	$(CC)
else
	export LD	:=	$(CXX)
endif

export OFILES	:=	$(addsuffix .o,$(BINFILES)) \
					$(addsuffix .o,$(VPOFILES)) \
					$(addsuffix .o,$(FPOFILES)) \
					$(CPPFILES:.cpp=.o) $(CFILES:.c=.o) \
					$(sFILES:.s=.o) $(SFILES:.S=.o)

#---------------------------------------------------------------------------------
# Build a list of include paths
#---------------------------------------------------------------------------------
export INCLUDE	:=	$(foreach dir,$(INCLUDES), -I$(CURDIR)/$(dir)) \
					$(foreach dir,$(LIBDIRS),-I$(dir)/include) \
					$(LIBPSL1GHT_INC) \
					-I$(CURDIR)/$(BUILD) -I$(PORTLIBS)/include \
					-I$(PS3DEV)/portlibs/ppu/include/freetype2

#---------------------------------------------------------------------------------
# Build a list of library paths
#---------------------------------------------------------------------------------
export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L$(dir)/lib) \
					$(LIBPSL1GHT_LIB) -L$(PORTLIBS)/lib

export OUTPUT	:=	$(CURDIR)/$(TARGET)
.PHONY: $(BUILD) clean

#---------------------------------------------------------------------------------
$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@$(MAKE) --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

#---------------------------------------------------------------------------------
clean:
	@echo Cleaning artifacts...
	@rm -fr $(BUILD) $(OUTPUT).ELF $(OUTPUT).SELF  EBOOT.BIN

#---------------------------------------------------------------------------------
run:
	ps3load $(OUTPUT).SELF

#---------------------------------------------------------------------------------
pkg: $(BUILD) $(OUTPUT).PKG

#---------------------------------------------------------------------------------
npdrm: $(BUILD)

#---------------------------------------------------------------------------------
else

DEPENDS	:=	$(OFILES:.o=.d)

#---------------------------------------------------------------------------------
# Main targets
#---------------------------------------------------------------------------------
$(OUTPUT).a: $(OFILES)
$(OFILES): $(BINFILES) $(VCGFILES) $(VSAFILES)

#---------------------------------------------------------------------------------
# This rule links in binary data with the .bin extension
#---------------------------------------------------------------------------------
%.bin.o	:	%.bin
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

#---------------------------------------------------------------------------------
%.vpo.o	:	%.vpo
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

#---------------------------------------------------------------------------------
%.fpo.o	:	%.fpo
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

-include $(DEPENDS)

#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------

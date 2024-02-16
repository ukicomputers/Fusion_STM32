# ime ploce
BOARD ?= Fusion_STM32F43
# micropython src
MICROPY_TOP ?= $(abspath ../../lib/micropython)

# target, napisati ispod deploy samo ako iz produkcije
all: firmware

################################################################################
BOARD_DIR = $(abspath .)
BUILD = $(abspath build)

include $(MICROPY_TOP)/py/mkenv.mk
include $(MICROPY_TOP)/py/mkrules.mk

firmware:
	$(Q)$(MAKE) -C $(MICROPY_TOP)/ports/stm32 \
		PROJECT_TOP=$(abspath ../..) \
		BOARD=$(BOARD) \
		BOARD_DIR=$(BOARD_DIR) \
		BUILD=$(BUILD)

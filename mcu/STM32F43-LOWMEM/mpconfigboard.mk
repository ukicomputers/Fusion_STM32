# MCU podesavanja
MCU_SERIES = f4

# Izabracemo ime za F439 mcu, svi isto funkcionisu iz F4(3) serije, provereno
# Podrzava F43, F40, F44 (promena kod CMSIS_MCU & potreban auto gen AF conf file)
CMSIS_MCU = STM32F439xx
AF_FILE = $(BOARD_DIR)/stm32f437_af.csv
LD_FILES = $(BOARD_DIR)/linker.ld boards/common_ifs.ld

# Samo kod normalnog bootloader-a, zbog toga postoje 2x f.bin, deli se MPY FS
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08020000

# MicroPython podesavanja (nista specijalno)
MICROPY_FLOAT_IMPL = double

# Moduli u MicroPython-u:
# import <ime_fajla_biblioteke>
FROZEN_MANIFEST = $(BOARD_DIR)/manifest.py

# Ethernet config
MICROPY_PY_LWIP = 1
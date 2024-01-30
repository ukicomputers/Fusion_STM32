# MCU podesavanja
MCU_SERIES = f7

CMSIS_MCU = STM32F767xx
AF_FILE = $(BOARD_DIR)/stm32f767_af.csv
LD_FILES = $(BOARD_DIR)/linker.ld boards/common_ifs.ld

# Samo kod normalnog bootloader-a, zbog toga postoje 2x f.bin, deli se MPY FS
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08020000

# MicroPython podesavanja (nista specijalno)
MICROPY_FLOAT_IMPL = double

# Ethernet config (moguca promena na CycloneTCP)
MICROPY_PY_LWIP = 1
MICROPY_PY_SSL = 1
MICROPY_SSL_MBEDTLS = 1

# Moduli u MicroPython-u:
# import <ime_fajla_biblioteke>
FROZEN_MANIFEST = $(BOARD_DIR)/manifest.py

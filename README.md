# Fusion_STM32
Port for MicroPython language on STM32 developed for Fusion for ARM v8.


[![Compile and Release MicroPython firmware](https://github.com/ukicomputers/Fusion_STM32/actions/workflows/make_mpy.yml/badge.svg)](https://github.com/ukicomputers/Fusion_STM32/actions/workflows/make_mpy.yml)

# Prepare
You are required to init submodules and install required compilers. Required compilers are GCC/G++ (GNU SDK) for ARM. <br>
**Submodule initialization:**
```sh
git submodule update --init lib/micropython
cd lib/micropython
git submodule update --init lib/stm32lib lib/mbedtls lib/lwip lib/micropython-lib
```
**Compiling required cross compiler for MP:**
```sh
make -C lib/micropython/mpy-cross
```
# Build
To build a firmware for choosen development board, you need to do following. The firmware will be located at `boards/<dev_board>/build/firmware.hex`.
```sh
cd boards/<dev_board>
make -j$(nproc) LTO=1 DEBUG=0 LOWMEM=1
```
`LTO` (Link Time Optimisation) usually shrinks .hex file for 2-3%. Not recommended in usage when MbedTLS is enabled.
`DEBUG` stands to enable debugging symbols for GDB.
`LOWMEM` is used to build a firmware for Low Memory MCU or normal (> 1024KB flash size).
Differences are explained in [LATEST.md](https://github.com/ukicomputers/Fusion_STM32/blob/main/LATEST.md).

# Alternate Function file generation
To generate a Alternate Function file, and later use it for specific MCU port, execute following Python script:
```
python3 make_af.py <stm32_mcu_name>
```
The source for the script is from micropython main repository.

# TODO, future releases, support
Port currently **DOES NOT** support TFT SSD19603 controller.<br>
However, plans are to add LVGL support. <br>
## STM32 family
This MPY port supports following STM32 families (some of them are ported):
- F0
- F4
- F7
- G0*
- G4*
- H7!
- L0*
- L4*
- WB! <br>

**(*) With minimal possible usage beacuse of memory limit & other things** <br>
**(!) May not all alternate functions (LAN, BLE, Wi-Fi) usable or developed** 

# Release
The ports are automatically built by GitHub Actions on every new commit. Check the latest release to find a HEX file for your MCU.

# License
MicroPython is licensed under MIT license by Damien P. George `Copyright (c) 2021 Damien P. George`<br>
This port is licensed under CC BY-3.0 license under Uglješa Lukešević. <br>
Full support written for **MikroE** MCU cards.

## Required header
On every file that uses this port, please add this header:
## C/C++
```c
/* Port written by Uglješa Lukešević (@ukicomputers)            *
 * MicroPython licensed with MIT license under Damien P. George */
```
## Python
```py
""" 
Port written by Uglješa Lukešević (@ukicomputers)
MicroPython licensed with MIT license under Damien P. George
"""
```

It is also required when calling `help()` in MicroPython firmware to output show that port is written by me. That is already set up. <br><br>If use this port in NECTO, also in About section, define that port is written by me, exactly like this:
## MicroPython port
Uglješa Lukešević

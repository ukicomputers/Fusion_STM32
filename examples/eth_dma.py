# Written by Uglješa Lukešević
# Summary: Check DMA controller @ ETH control for STM32F4 (RM009 1286/33.8.4)
# Licensed under CC-BY 3.0

import machine

# DMA1 (Ethernet) base
ETH_BASE = 0x40028000

# Ethernet DMA Status Register
ETH_DMASR = ETH_BASE + 0x1014

# Fatal Bus Error
def fbe():
    return (machine.mem32[ETH_DMASR] & (1 << 13)) != 0

# Transmit process stoped
def tps():
    return (machine.mem32[ETH_DMASR] & (1 << 1)) != 0

# Receive Buffer Unavaible
def rbu():
    return (machine.mem32[ETH_DMASR] & (1 << 7)) != 0

if fbe():
    print("Fatal bus error occured.")
else:
    print("Fatal bus error not occured.")

if tps():
    print("Transmit proccess stoped.")
else:
    print("Transmit OK.")

if rbu():
    print("Receive buffer unavaible.")
else:
    print("Receive buffer OK.")
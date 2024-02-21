# Support
This is information about latest release of firmware update. Firmware supports MikroE MCU card family for STM32.
| Supported MCU(s)        |   Tests passed |
| :----------------: | :------:|
| STM32F43        |   Yes   |
| STM32F43-LOWMEM        |   Yes   |
| STM32F76       |   No |
| STM32F76-LOWMEM       |   N/A |

Version differences:
| Version        |   Ethernet  | MbedTLS (crypto, SSL) support | Typical out file size |
| :----------------: | :------:| :----:| :----: |
| NORMAL        |   Yes   | Yes | ~1200 KB |
| LOWMEM        |   Yes   | No | ~900 KB |

The supported key features for it is built-in Ethernet, RTC clock, USB U(S)ART protocol, mikroBUS usage. You can check [examples](https://github.com/ukicomputers/Fusion_STM32/tree/main/examples) folder for all key feature usage.
# Default communications
The prefered default communication is via USB UART with baud rate of 115200.
# Credits
Uglješa Lukešević (@ukicomputers) & other contributors.

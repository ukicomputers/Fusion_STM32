#include "py/builtin.h"

const char me_help_text[] =
    "Welcome to MicroPython!\n"
    "\n"
    "For online docs please visit http://docs.micropython.org/\n"
    "General help and support is located at http://mikroe.com/\n"
    "\n"
    "Plain pins are labeled as P(A-Z)(0-8-15-32 per bit)\n"
    "MikroBUS pins are labeled as MB(1-5)_(function: AN, RST, CS, SCK...)\n"
    "MikroBUS & other protocols are labeled (master: MBx, USB)_(protocol: UART, I2C, SPI)\n"
    "To avoid any confusion, in every file please include: from defs import *\n"
    "\n"
    "Pin IO modes are: Pin.IN, Pin.OUT, Pin.ALT\n"
    "Pin pull modes are: Pin.PULL_UP, Pin.PULL_DOWN\n"
    "\n"
    "Useful control commands:\n"
    "  CTRL-C -- interrupt a running program\n"
    "  CTRL-D -- on a blank line, do a soft reset of the board\n"
    "  CTRL-E -- on a blank line, enter paste mode\n"
    "\n"
    "For further help on a specific object, type help(obj)\n"
    "For a list of available modules, type help('modules')\n"
    "\n"
    "Port written by Uglješa Lukešević (@ukicomputers)\n"
    "Made for MikroE development boards\n"
;
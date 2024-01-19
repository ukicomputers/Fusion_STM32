from machine import UART
from time import sleep
from defs import *

uart = UART(USB_UART, 9600)
uart.init(9600, bits=8, parity=None, stop=1)

while True:
	uart.write("ja sam uki\r\n")
	sleep(1.5)

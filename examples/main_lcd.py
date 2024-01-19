from machine import Pin, I2C
from lcd.lcd_api import LcdApi
from lcd.i2c_lcd import I2cLcd
from time import sleep
from defs import *

I2C_ADDR = 0x27
totalRows = 2
totalColumns = 16

i2c = I2C(MB4_I2C, freq=40000)
lcd = I2cLcd(i2c, I2C_ADDR, totalRows, totalColumns)

while True:
    lcd.clear()
    lcd.putstr("Zdravo!")
    lcd.move_to(0, 1)
    lcd.putstr("I2C test!")
    sleep(2)
    lcd.clear()
    lcd.putstr("@ukicomputers")
    sleep(2)

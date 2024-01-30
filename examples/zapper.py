from defs import *
import machine
from lcd.lcd_api import LcdApi
from lcd.i2c_lcd import I2cLcd
import time

def generate_signal(min):
    pin = machine.Pin("MB2_PWM", machine.Pin.OUT)
    test = machine.Pin("MB2_AN", machine.Pin.IN)
    timer = machine.Timer(0)
    timer.init(freq=30000, mode=machine.Timer.PERIODIC, callback=lambda onoff: pin.toggle())
    cod = min * 60

    while cod > 0:
        lcd.clear()
        lcd.putstr("Preostalo: {:02}:{02}".format(cod // 60, cod % 60))
        lcd.move_to(0, 1)
        lcd.putstr("Povezano: " + str(test.value()))
        time.sleep(1)
        cod -= 1

I2C_ADDR = 0x27
totalRows = 2
totalColumns = 16

i2c = machine.I2C(MB4_I2C, freq=40000)
lcd = I2cLcd(i2c, I2C_ADDR, totalRows, totalColumns)

lcd.clear()
lcd.putstr("Klikni za start")
lcd.move_to(0, 1)
lcd.putstr("dugme PA0")

safeSwitch = machine.Pin("PA0", machine.Pin.IN)
while safeSwitch.value() == 0:
    time.sleep(0.1)

odb = 20 * 60
for i in range(2):
    generate_signal(7)
    while odb > 0:
        lcd.clear()
        lcd.putstr("Pauza: {:02}:{:02}".format(odb // 60, odb % 60))
        time.sleep(1)
        odb -= 1

generate_signal(7)
lcd.clear()
lcd.putstr("Kraj!")
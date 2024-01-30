from machine import Pin
from time import sleep

led = Pin("MB2_AN", Pin.OUT)
dugme = Pin("PA0", Pin.IN)

while True:
	if(dugme.value() == 1):
		led.high()
		sleep(0.2)
		led.low()
		sleep(0.2)
	else:
		led.low()

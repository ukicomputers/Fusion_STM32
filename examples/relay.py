from ClickSDK import relay3
from time import sleep

relay1 = relay3.Relay3Click(1)
relay2 = relay3.Relay3Click(5)

while True:
    relay1.toggle(1)
    relay2.toggle(1)
    sleep(0.80)
    relay1.toggle(1)
    relay1.toggle(2)
    relay2.toggle(1)
    relay2.toggle(2)
    sleep(0.80)
    relay1.toggle(1)
    relay2.toggle(1)
    sleep(0.80)

from machine import Pin

class Relay3Click:
    def __init__(self, mikrobus_slot):
        self.relay1_pin = Pin(f'MB{mikrobus_slot}_RST', Pin.OUT)
        self.relay2_pin = Pin(f'MB{mikrobus_slot}_CS', Pin.OUT)
        self.relay1_state = False
        self.relay2_state = False

        self.relay1_pin.low()
        self.relay2_pin.low()

    def on(self, relay):
        if relay == 1:
            self.relay1_pin.high()
            self.relay1_state = True
        elif relay == 2:
            self.relay2_pin.high()
            self.relay2_state = True

    def off(self, relay):
        if relay == 1:
            self.relay1_pin.low()
            self.relay1_state = False
        elif relay == 2:
            self.relay2_pin.low()
            self.relay2_state = False

    def toggle(self, relay):
        if relay == 1:
            if self.relay1_state:
                self.relay1_pin.low()
                self.relay1_state = False
            else:
                self.relay1_pin.high()
                self.relay1_state = True
        elif relay == 2:
            if self.relay2_state:
                self.relay2_pin.low()
                self.relay2_state = False
            else:
                self.relay2_pin.high()
                self.relay2_state = True
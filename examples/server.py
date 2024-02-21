from micropyserver import MicroPyServer
from machine import Pin
import time
import network

nic = network.LAN()
nic.active(True)
nic.ifconfig("dhcp")
print(nic.ifconfig())

def ukljuci(request):
    pin.value(1)
    server.send("UKLJUCENO! ukicomputers.")

def iskljuci(request):
    pin.value(0)
    server.send("ISKLJUCENO! ukicomputers.")

def poruka(request):
    server.send("/ukljuci za HIGH, /iskljuci za LOW. ukicomputers.")

pin = Pin("PA0", Pin.OUT)
server = MicroPyServer()

server.add_route("/", poruka)
server.add_route("/ukljuci", ukljuci)
server.add_route("/iskljuci", iskljuci)

server.start()

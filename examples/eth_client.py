# LAN priprema
import network
nic = network.LAN()
nic.config(trace=8)
nic.active(True)
nic.ifconfig(('192.168.0.140', '255.255.255.0', '192.168.0.1', '8.8.8.8'))
nic.isconnected()

# Socket test
import urequests
r = urequests.get("http://192.168.0.1")
print(r.text)
r.close()
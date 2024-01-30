def change():
        with open("boot.py", "w") as boot_file:
            boot_file.write(
"""\
from defs import *
import projectWrite
"""
            )
try:
    import boot
except:
    change()
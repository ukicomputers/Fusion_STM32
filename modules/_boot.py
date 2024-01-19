# za sad brzi nacin, 2x execute boot.py
def change():
        with open("boot.py", "w") as boot_file:
            boot_file.write(
                """\
# boot.py (prepare file, changes not recommended)
                """
            )
try:
    import boot
except Exception:
    change()
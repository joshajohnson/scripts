winTitle = window.get_active_title()

if "pcbnew" in winTitle.lower():
    keyboard.send_keys("w") # Next track width
else:
    pass
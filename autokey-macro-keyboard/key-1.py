winTitle = window.get_active_title()

if "pcbnew" in winTitle.lower():
    keyboard.send_key('<escape>')
else:
    keyboard.send_key('<escape>')
    

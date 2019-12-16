# Scripts

I occasinally script things to make my life easier, and I'll add them here if they may be of use to others.

### panel.py

[Flemmeng Frandsen](https://gitlab.com/dren.dk/kicad-util) makes a great KiCad panelisation tool, however I use it so infrequently I keep forgetting the command to call it. As such I made a script to prompt me for the required values along with calling his tool. Requires kicad-util to be installed and for the path to the .jar file to be hardcoded into the script. Call it with ```/path-to-script/panel.py /path/project.kicad_pcb```

### plot_gerbers.py

Python script to plot gerbers from KiCad. Stolen from [Greg Davill](https://github.com/gregdavill/kicadScripts) and modified to work with Python3.

Run ```path-to-file/plot_gerbers.py /path-to-prog/project.kicad_pcb``` to automatically generate and zip up files.

### macro-keyboard.ahk

AutoHotKey script to do key remapping on my [Macro Keyboard](https://github.com/joshajohnson/macroKeyboard).

### colemak-remap.ahk

AHK files to convert a windows laptop to colemak, with some extra tweaks such as fn+caps = del and right hand arrow control.

### colemak-remap-ext-keybord.ahk

AHK files to implement fn+caps = del and right hand arrow control when the keybord inputs are already colemak without higher levels of control. 

### josh96

QMK files for a RGB96 keyboard, configured to my liking.

To build / flash `sudo make josh96:default:dfu` from the `qmk_firmware` folder.

### autokey

Autokey files to do remapping of additional key combinations for my Colemak Keyboard. 

### autokey-macro-keyboard

Autokey files to allow use of the macro keyboard in Linux, however this is a bit buggy, not sure why.

### kicad-things.md

As the name suggests, a bunch of KiCad stuff I don't want to forget.
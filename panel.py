import os
# Path of the ku.jar file
kuPath = "\"C:\Program Files (x86)\KiCadPaneliser\ku.jar\""

# Get file directory
directory = os.path.dirname(os.path.realpath(__file__))
usrDirectory = input("File directory of board to be panelised. Leave blank for current dir: ")

if usrDirectory:
    directory = usrDirectory

# Get file name
panelName = "panel.kicad_pcb"
usrPanelName = input("File name of project to be panelised, do not include extension: \nLeave blank for default 'panel': ")

if usrPanelName:
    panelName = "{0}.kicad_pcb".format(panelName)

# Concat to get in format for command line
fullPath = "\"{0}\{1}\"".format(directory,panelName)

# Mouse bite specifications
filletRadius = 1.2
holeDia = 0.3
holeInset = -holeDia / 2.0
holeInsetWord = "flush"
pitch = 1
tabWidth = 2.5

while(True):
    usrFilletRadius = input("Fillet Radius, currently {0}mm: ".format(filletRadius))
    usrHoleDia = input("Hole Diameter, currently {0}mm: ".format(holeDia))
    usrHoleInset = input("Hole Inset, currently {0}. Enter inset, flush, or a custom number: ".format(holeInsetWord))
    usrHolePitch = input("Hole Pitch, currently {0}mm: ".format(pitch))
    usrTabWidth = input("Tab Width, currently {0}mm: ".format(tabWidth))

    if usrFilletRadius:
        filletRadius = usrFilletRadius

    if usrHoleDia:
        holeDia = usrHoleDia

    if usrHoleInset:
        holeInsetWord = usrHoleInset
        if usrHoleInset == "inset" or usrHoleInset == "i":
            holeInset = float(holeDia) / 2.0 + 0.05
        elif usrHoleInset == "flush" or usrHoleInset == 'f':
            holeInset = -float(holeDia) / 2.0
        else:
            holeInset = usrHoleInset
    else:
        holeInset = -float(holeDia) / 2.0

    if usrHolePitch:
        pitch = usrHolePitch

    if usrTabWidth:
        tabWidth = usrTabWidth

    # compose the command line string
    cmd = "java -jar {0} pcb --file={1} panel --fillet={2} --hole={3} --inset={4} --pitch={5} --width={6}".format(kuPath,fullPath,filletRadius,holeDia,holeInset,pitch,tabWidth)

    # run the command
    os.system(cmd)

    print("\nLets do it again!\n")




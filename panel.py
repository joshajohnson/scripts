#!/bin/python3

import os
import sys

# Get pcb file name/path
filename=sys.argv[1]
project_path = os.path.abspath(os.path.split(filename)[0])
fullPath = project_path + filename

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
    usrTabWidth = input("Tab Width, default 2.5mm: ")

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

    # compose the command line string, may need to change dir for kicadutil.jar
    cmd = "java -jar ~/Documents/kicad/kicadutil.jar pcb --file={} panel --fillet={} --hole={} --inset={} --pitch={} --width={}".format(fullPath,filletRadius,holeDia,holeInset,pitch,tabWidth)

    # run the command
    os.system(cmd)

    print("\nLets do it again!\n")


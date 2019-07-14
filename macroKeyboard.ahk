; Config Stuff
#SingleInstance, force
; Macro Keyboard Layout

; ----------------------
; |   ENC1      ENC2   |
; | 00   01   02   03  |
; | 10   11   12   13  |
; | 20   21   22   23  |
; | 30   31   32   33  |
; ----------------------

; Run only when KiCad is open
#IfWinActive ahk_exe kicad.exe
; Key 00
F13::Esc ; Escape
; Key 01
F14::Del ; Delete
; Key 02
F15::^+m ; Measure
; Key 03
F16::^+v ; Via
; Key 10
F17::^+z ; Copper pour
; Key 11
F18::^+k ; Keepout area
; Key 12
F19::`   ; Decrease via size
; Key 13
F20::\   ; Increase via size
; Key 20
F21::^+t ; Text
; Key 21
F22::^+h ; Dimension
; Key 22
F23::^m  ; Move exactly
; Key 23
F24::^r  ; Move relative
; Key 30
SC073::
; Key 31      
SC070::
; Key 32     
SC07D::
; Key 33   
SC079::

;;;;;; Encoder 1 ;;;;;;
; Clockwise     
SC07B::w    ; Next track width
; AntiClockwise 
SC05C::^w   ; Prev track width
; Button
SC16C::
;;;;;; Encoder 2 ;;;;;;
; NOTE: Button press currently toggles layer
; Clockwise      
SC078::n    ; Next grid size
; AntiClockwise
SC077::+n   ; Previous grid size


; Run all of the time
#IfWinActive
; Key 00
F13::Esc ; Escape
; Key 01
F14::^w  ; Close tab
; Key 02
F15::WheelUp
; Key 03
F16::WheelDown
; Key 10
F17::^Tab
; Key 11
F18::LButton
; Key 12
F19::MButton
; Key 13
F20::RButton
; Key 20
F21::Esc ; TO FILL IN
; Key 21
F22::Esc ; TO FILL IN
; Key 22
F23::Esc ; TO FILL IN
; Key 23
F24::Esc ; TO FILL IN
; Key 30
SC073::Esc ; TO FILL IN
; Key 31      
SC070::Esc ; TO FILL IN
; Key 32     
SC07D::Esc ; TO FILL IN
; Key 33   
SC079::Esc ; TO FILL IN

;;;;;; Encoder 1 ;;;;;;
; Clockwise     
SC07B::Volume_Up
; AntiClockwise 
SC05C::Volume_Down
; Button
SC16C::Volume_Mute

;;;;;; Encoder 2 ;;;;;;
; Clockwise      
SC078::Media_Next
; AntiClockwise
SC077::Media_Prev
; Button
SC16B::Media_Play_Pause
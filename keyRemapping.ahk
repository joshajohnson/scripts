Pause:: Run "C:\Windows\System32\SnippingTool.exe
    Return
ScrollLock::#Tab ; View windows with scr lock

F12:: ;Lock with stopping audio
{
Sleep, 200
Send {Media_Stop}
DllCall("LockWorkStation")

Sleep, 200

SendMessage,0x112,0xF170,2,,Program Manager
}
return


#l:: ;Lock without stopping audio
{
Sleep, 200
DllCall("LockWorkStation")

Sleep, 200

SendMessage,0x112,0xF170,2,,Program Manager
}
return
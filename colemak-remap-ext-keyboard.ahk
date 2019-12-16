#SingleInstance force
#NoEnv ; Recommended for performance and compatibility with future AutoHotkey releases.
SendMode Input ; Recommended for new scripts due to its superior speed and reliability.
SetTitleMatchMode 3  ; Exact matching to avoid confusing T/B with Tab/Backspace.

; Josh's strange shit
; LAlt + neio to left/down/up/right keys (right hand NEIO)
<!n::
{
	Send {Left}
	return
}

<!e::
{
	Send {Down}
	return
}

<!i::
{
	Send {Up}
	return
}

<!o::
{
	Send {Right}
	return
}

; Map LAlt + Backspace to Delete
<!BS::
{
	Send {Delete}
	return
}

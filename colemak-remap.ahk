#SingleInstance force
#NoEnv ; Recommended for performance and compatibility with future AutoHotkey releases.
SendMode Input ; Recommended for new scripts due to its superior speed and reliability.
SetTitleMatchMode 3  ; Exact matching to avoid confusing T/B with Tab/Backspace.

; QWERTY to Colemak Mapping
;`::`
;1::1
;2::2
;3::3
;4::4
;5::5
;6::6
;7::7
;8::8
;9::9
;0::0
;-::-
;=::=

;q::q
;w::w
e::f
r::p
t::g
y::j
u::l
i::u
o::y
p::`;
;[::[
;]::]
;\::\

;a::a
s::r
d::s
f::t
g::d
;h::h
j::n
k::e
l::i
`;::o
;'::'

;z::z
;x::x
;c::c
;v::v
;b::b
n::k
;m::m
;,::,
;.::.
;/::/

Capslock::Backspace

; Josh's strange stuff
; Space + neio to left/down/up/right keys (right hand JKL;)
Space & j::
{
	Send {Left}
	return
}

Space & k::
{
	Send {Down}
	return
}

Space & l::
{
	Send {Up}
	return
}

Space & `;::
{
	Send {Right}
	return
}

; Space + Backspace to Delete
Space & CapsLock::
{
	Send {Delete}
	return
}

; Without this, every time space is 
; pressed by itself nothing happens 
Space::Space
; ---------------------------------------------------------------------------

_SCOPETABLE_ENTRY struc	; (sizeof=0xC, align=0x4, copyof_1) ; XREF: .rdata:stru_4111A0/r
					; .rdata:stru_411558/r ...
EnclosingLevel	dd ?
FilterFunc	dd ?			; offset
HandlerFunc	dd ?			; offset
_SCOPETABLE_ENTRY ends

; ---------------------------------------------------------------------------

CPPEH_RECORD	struc ;	(sizeof=0x18, align=0x4, copyof_6) ; XREF: start/r
					; ___crtGetStringTypeA/r ...
old_esp		dd ?			; XREF:	start+23/w start:loc_40BB61/r ...
exc_ptr		dd ?			; XREF:	start:loc_40BB4D/r ; offset
registration	_EH3_EXCEPTION_REGISTRATION ? ;	XREF: start:loc_40BAE2/w
					; ___crtGetStringTypeA+D2/w ...
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_3)
					; XREF:	CPPEH_RECORD/r
Next		dd ?			; XREF:	___crtGetStringTypeA+13A/r
					; ___crtLCMapStringA+193/r ; offset
ExceptionHandler dd ?			; offset
ScopeTable	dd ?			; offset
TryLevel	dd ?			; XREF:	start:loc_40BAE2/w
					; ___crtGetStringTypeA+D2/w ...
_EH3_EXCEPTION_REGISTRATION ends

; ---------------------------------------------------------------------------

tagRECT		struc ;	(sizeof=0x10, align=0x4, copyof_7) ; XREF: sub_401E90/r
left		dd ?
top		dd ?
right		dd ?
bottom		dd ?
tagRECT		ends

; ---------------------------------------------------------------------------

tagPOINT	struc ;	(sizeof=0x8, align=0x4,	copyof_9) ; XREF: sub_402860/r
x		dd ?
y		dd ?
tagPOINT	ends

; ---------------------------------------------------------------------------

WNDCLASSA	struc ;	(sizeof=0x28, align=0x4, copyof_10) ; XREF: _WinMain@16/r
style		dd ?
lpfnWndProc	dd ?			; offset
cbClsExtra	dd ?
cbWndExtra	dd ?
hInstance	dd ?			; offset
hIcon		dd ?			; offset
hCursor		dd ?			; offset
hbrBackground	dd ?			; offset
lpszMenuName	dd ?			; offset
lpszClassName	dd ?			; offset
WNDCLASSA	ends

; ---------------------------------------------------------------------------

tagMSG		struc ;	(sizeof=0x1C, align=0x4, copyof_28) ; XREF: sub_40B580/r
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
tagMSG		ends

; ---------------------------------------------------------------------------

POINT		struc ;	(sizeof=0x8, align=0x4,	copyof_30) ; XREF: tagMSG/r
x		dd ?
y		dd ?
POINT		ends

; ---------------------------------------------------------------------------

_STARTUPINFOA	struc ;	(sizeof=0x44, align=0x4, copyof_31) ; XREF: start/r
					; __ioinit/r
cb		dd ?
lpReserved	dd ?			; offset
lpDesktop	dd ?			; offset
lpTitle		dd ?			; offset
dwX		dd ?
dwY		dd ?
dwXSize		dd ?
dwYSize		dd ?
dwXCountChars	dd ?
dwYCountChars	dd ?
dwFillAttribute	dd ?
dwFlags		dd ?			; XREF:	start+98/w start+AD/r
wShowWindow	dw ?			; XREF:	start+B3/r
cbReserved2	dw ?			; XREF:	__ioinit+5F/r
lpReserved2	dd ?			; XREF:	__ioinit+6B/r ;	offset
hStdInput	dd ?			; offset
hStdOutput	dd ?			; offset
hStdError	dd ?			; offset
_STARTUPINFOA	ends

; ---------------------------------------------------------------------------

_SECURITY_ATTRIBUTES struc ; (sizeof=0xC, align=0x4, copyof_37)	; XREF:	__sopen/r
nLength		dd ?
lpSecurityDescriptor dd	?		; offset
bInheritHandle	dd ?
_SECURITY_ATTRIBUTES ends

; ---------------------------------------------------------------------------

_cpinfo		struc ;	(sizeof=0x14, align=0x4, copyof_40) ; XREF: __setmbcp/r
					; _setSBUpLow/r
MaxCharSize	dd ?
DefaultChar	db 2 dup(?)
LeadByte	db 12 dup(?)
		db ? ; undefined
		db ? ; undefined
_cpinfo		ends

; ---------------------------------------------------------------------------

FILE		struc ;	(sizeof=0x20, align=0x4, copyof_41) ; XREF: _sprintf/r
					; _sscanf/r
_ptr		dd ?			; offset
_cnt		dd ?
_base		dd ?			; offset
_flag		dd ?
_file		dd ?
_charbuf	dd ?
_bufsiz		dd ?
_tmpfname	dd ?			; offset
FILE		ends



;=================================================================== Test Cases/Test Data ========================================================================
; Critical (C)		:		Y
; TestCase No.		:		TS_J1939_DBE_06
; TestCases			:		"Add Signal Descriptor for signal length >31 bit"
; Test Data			:		"Message Name: Test, Message ID : 0x123, Signal Name : Test64bit, Type : unsigned INT"
; Test Setup		:		1. Select the Signal "Test64bit"
;~ 							2. Select "New Desc" menu or toolbar
;~ 							3. Add the descriptor name and value.
;~ 							4. Select OK

; Expected Results  : 		"The signal descriptor will be added to the list"
;==========================================================================Test Procedure =========================================================================

ConsoleWrite(@CRLF)
ConsoleWrite(@CRLF)
ConsoleWrite("****Start : TS_J1939_DBE_06.au3****"&@CRLF)

_launchApp()

WinActivate($WIN_BUSMASTER,3)
if winexists($WIN_BUSMASTER) then
	_openJ1939DB("testJ1939DBE_06")														; Open dbf file
	$sigDetlvhwd=controlgethandle($WIN_BUSMASTER,"",$LVC_SigDet_DBeditor)				; Get handle of signal details list view
	_GUICtrlListView_ClickItem($sigDetlvhwd,0)											; Click on the first item in the Signal details list view
	sleep(250)
	ControlClick($WIN_BUSMASTER,"",$BTN_SigDes_DBEditor)								; Click the 'New Desc...' button
	sleep(1000)
	_addSigDesc("Desc64",64)															; Call _addSigDesc function from 'globalFunc4Module.au3' file to add signal description.
	sleep(1000)
	;------Maximize Child Window DatabaseEditor - CAN---------------
	_Maximize_childWindow("DatabaseEditor - J1939")
	$sigDesclvhwd=controlgethandle($WIN_DBEditor_J1939,"",$LVC_SigDesc_SigDesc)				; Get handle of signal description list view
	$sigDescName=_GUICtrlListView_GetItemText($sigDesclvhwd,0,0)						; Fetch the signal desc name
	$sigDescVal=_GUICtrlListView_GetItemText($sigDesclvhwd,0,1)							; Fetch the signal desc value
	ConsoleWrite("$sigDescName :"&$sigDescName&@CRLF)
	ConsoleWrite("$sigDescVal :"&$sigDescVal&@CRLF)

    _ActivatechildWindow($WIN_DBEditor_J19391)
	WinClose($WIN_DBEditor_J19391)
	if WinWaitActive($WIN_BUSMASTER,$saveDBtxt,2) Then
		ControlClick($WIN_BUSMASTER,"",$BTN_No_SaveDB)
	EndIf
EndIf
if $sigDescName="Desc64" and $sigDescVal=64 Then
	_WriteResult("Pass","TS_J1939_DBE_06")
Else
	_WriteResult("Fail","TS_J1939_DBE_06")
EndIf


$isAppNotRes=_CloseApp()																		; Close the app

if $isAppNotRes=1 Then
	_WriteResult("Warning","TS_J1939_DBE_06")
EndIf

ConsoleWrite("****End : TS_J1939_DBE_06.au3****"&@CRLF)
ConsoleWrite(@CRLF)
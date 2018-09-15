include WINDOWS.inc
include user32.inc
include kernel32.inc
includelib user32.lib
includelib kernel32.lib

.data ;Глобальнi данi
	Time_title	db ' Лабораторна робота №2',0
	
	Month_of_year \
	db	'Грудня',4 dup(0),\
		'Січня',5 dup(0),\
		'Лютого',4 dup(0),\
		'Березня',3 dup(0),\
		'Квітня',4 dup(0),\
		'Травня',4 dup(0),\
		'Червня',4 dup(0),\
		'Липня',5 dup(0),\
		'Серпня',4 dup(0),\
		'Вересня',3 dup(0),\
		'Жовтня',4 dup(0),\
		'Листопада',0,\

	
	Day_of_week \
	db	'Неділя',4 dup(0),\
		'Понеділок',0,\
		'Вівторок',2 dup(0),\
		'Середа',4 dup(0),\
		'Четверг',3 dup(0),\
		"П'ятниця",2 dup(0),\
		'Субота',0
	
	FORMAT_STRING  \
	db '  Системний час:',0dh,0ah,0dh,0ah
	db '  Дата:		%ld %s %ld року',0dh,0ah
	db '  Час:		%ld:%ld:%ld	',0dh,0ah
	db '  День тижня:	%s',13,10,0dh,0ah
	db 0 ;-кінець стрiчки
	 
	;0dh,0ah - код Enter(#13,#10)
	;\ -перенос стрiчки
.data?
	Save_esp dd ? 
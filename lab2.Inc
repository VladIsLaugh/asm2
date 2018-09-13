include WINDOWS.inc
include user32.inc
include kernel32.inc
includelib user32.lib
includelib kernel32.lib

.data ;Глобальнi данi
slon db 'dthtctym'
	Time_title	db ' Лабораторна робота №2',0
	FORMAT_STRING  \
	db '    Системний час:',0dh,0ah,0dh,0ah
	db '  Дата:		%ld %d %ld року',0dh,0ah
	db '  Час		%ld:%ld:%ld	',0dh,0ah
	db 0 ;-кінець стрiчки
	 
	;0dh,0ah - код Enter(#13,#10)
	;\ -перенос стрiчки
.data?
	Save_esp dd ? 

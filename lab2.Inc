include WINDOWS.inc
include user32.inc
include kernel32.inc
includelib user32.lib
includelib kernel32.lib

.data ;��������i ���i
	Time_title	db ' ����������� ������ �2',0
	
	Month_of_year \
	db	'������',4 dup(0),\
		'ѳ���',5 dup(0),\
		'������',4 dup(0),\
		'�������',3 dup(0),\
		'�����',4 dup(0),\
		'������',4 dup(0),\
		'������',4 dup(0),\
		'�����',5 dup(0),\
		'������',4 dup(0),\
		'�������',3 dup(0),\
		'������',4 dup(0),\
		'���������',0,\

	
	Day_of_week \
	db	'�����',4 dup(0),\
		'��������',0,\
		'³������',2 dup(0),\
		'������',4 dup(0),\
		'�������',3 dup(0),\
		"�'������",2 dup(0),\
		'������',0
	
	FORMAT_STRING  \
	db '  ��������� ���:',0dh,0ah,0dh,0ah
	db '  ����:		%ld %s %ld ����',0dh,0ah
	db '  ���:		%ld:%ld:%ld	',0dh,0ah
	db '  ���� �����:	%s',13,10,0dh,0ah
	db 0 ;-����� ���i���
	 
	;0dh,0ah - ��� Enter(#13,#10)
	;\ -������� ���i���
.data?
	Save_esp dd ? 
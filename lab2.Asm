.386
.model flat,STDCALL
option casemap :none  ;case sensitive
include lab2.inc
.code
Begin:
	call main
	invoke ExitProcess,NULL
	
main proc
LOCAL Time:SYSTEMTIME	;�������� ��i���, 
			          ;���� ��������� ���������� ����
LOCAL Buf[100]:BYTE	; ��������� ����� �100 ��������
	mov Save_esp,esp ; �������� �������� �����
	invoke GetLocalTime,addr Time;
	xor eax,eax	; eax=0
	mov ax,Time.wDayOfWeek
	mov bx,10
	mul bx	;ax*bx
	add eax,offset Day_of_week ;eax=address Day_of_week[Time.wDayOfWeek*10]
	push eax
	xor eax,eax
	mov ax,Time.wSecond	
	push eax
	mov ax,Time.wMinute	
	push eax
	mov ax,Time.wHour	
	push eax
	
	mov ax,Time.wYear	
	push eax
	mov ax,Time.wMonth
	mov bx,10
	mul bx	;ax*bx
	add eax,offset Month_of_year ;eax=address Day_of_week[Time.wDayOfWeek*10]
	push eax
	xor eax,eax

	mov ax,Time.wDay	
	push eax
	push offset FORMAT_STRING
	lea eax,Buf
	push eax
	call wsprintf
	mov esp, Save_esp; ��������� �������� �����
	invoke MessageBox,NULL,addr Buf,addr Time_title,MB_OK
	ret
main endp	
end Begin
.386
.model flat,STDCALL
option casemap :none  ;case sensitive
include lab2.inc
.code
Begin:
	call main
	invoke ExitProcess,NULL
	
main proc
LOCAL Time:SYSTEMTIME	;локальна змiнна, 
			          ;типу структура системного часу
LOCAL Buf[100]:BYTE	; локальний буфер в100 елементів
	mov Save_esp,esp ; зберігаємо вказівник стеку
	invoke GetLocalTime,addr Time;
	xor eax,eax	; eax=0
	mov ax,Time.wSecond	
	push eax
	mov ax,Time.wMinute	
	push eax
	mov ax,Time.wHour	
	push eax
	
	mov ax,Time.wYear	
	push eax
	mov ax,Time.wMonth	
	push eax
	mov ax,Time.wDay	
	push eax
	push offset FORMAT_STRING
	lea eax,Buf
	push eax
	call wsprintf
	mov esp, Save_esp; повертаємо вказівник стеку
	invoke MessageBox,NULL,addr Buf,addr Time_title,MB_OK
	ret
main endp	
end Begin

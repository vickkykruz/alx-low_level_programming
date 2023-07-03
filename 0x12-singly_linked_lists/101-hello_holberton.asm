


	extern	printf	;the called function

	section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s, 10, 0

	section .text	;the code section

	global main	;standard gcc entry point
	main:	;the entry point
	push	rbp	;set the stack frame

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0	;rax,rax
	call	printf	;Call the C function

	pop	rbp
	mov	rax,0	;return normal, no error
	ret	;return

section .data
	hello db 'Hello, Holberton!', 0
	nl db 10
section .text
	global _start

_start:
	; push arguments for printf onto the stack
	push qword hello
	push qword nl

	; call printf
	mov rdi, format
	mov rsi, rsp
	mov rax, 0
	call printf

	; call exit with the return value of printf
	mov rdi, rax
	call exit

section .rodata
	format db '%s%s', 0

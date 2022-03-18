global _start

section .text

_start:
	MOV rax, 1
	MOV rdi, 1
	MOV rsi, msg
	MOV rdx, msglength
	SYSCALL

	MOV rax, 60
	MOV rdi, 0
	SYSCALL

section .data
	msg: DB "Hello, World", 0xA
	msglength: EQU $ - msg

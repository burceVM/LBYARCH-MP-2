section .text
bits 64
default rel ;address relocation
global asm_version

; A = scalar (xmm0), 
;X = mem address of 1st vector (rdx), 
; Y = mem address of 2nd vector (r8), 
;n = number of floats in vector (r9), 
; Z = mem address of result vector (rbp + 32)
asm_version:
	;set-up for more than 4 parameters
	push rsi
	push rbp
	mov rbp, rsp
	add rbp, 8
	add rbp, 16
	mov r11, [rbp + 32]

	jmp loop2end

loop2end:
	cmp r9, 0
	je finish
	jmp do_math

do_math:
	movss xmm1, [rdx]

	;multiply A with X
	mulss xmm1, xmm0

	;add result with Y
	addss xmm1, [r8]

	;store result in Z
	movss [r11], xmm1

	add rdx, 4 ;next float in vector X
	add r8, 4 ;next float in vector Y
	add r11, 4 ;next float in vector Z

	dec r9
	jmp loop2end

finish: 
	pop rbp
	pop rsi
	ret
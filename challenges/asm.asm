
;   INTEL         ;      AT&T
global addInts    ; .global addints
global mulBy17    ; .global mulBy17
global subBy5x    ; .blobal sub5x

segment .text     ; .section .text
addInts:          ; addInts:
	mov eax, edi    ; 	movl %edi, %eax
	add eax, esi    ;   addl %esi, %eax
	add eax, ecx    ;   addl %ecx, %eax
	add eax, edx    ;   addl %edx, %eax
	ret             ;   ret


mulBy17:          ; mulBy17:
	imul edi, 17    ; 	imull $17, %edi
	mov eax, edi    ;		movl %edi, %eax
	ret             ;   ret


subBy5x:          ; subBy5x:
	imul esi, 5     ; 	imull $5, %esi
	sub edi, esi    ;   subl %esi, %edi
	mov eax, edi    ;   movl %edi, %eax
	ret             ;   ret



global asmOr
global asmXor
global notPlus1

segment .text

asmOr:
	mov eax, edi
	or eax, esi
	ret

asmXor:
	mov eax, edi
	xor eax, esi
	ret

notPlus1:
	mov eax, edi
	not eax
	inc eax
	ret

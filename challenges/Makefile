all: main.cpp asm.o
	g++ main.cpp asm.o -o exe

asm.o: asm.asm
	yasm -f elf64 asm.asm -o asm.o

all: main.cpp asm.o
	g++ -std=c++11 main.cpp asm.o -o exe

asm.o: asm.asm
	yasm -f elf64 asm.asm -o asm.o

clean:
	rm *.o exe

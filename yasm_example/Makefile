all: main.cpp assembly.o
	g++ main.cpp assembly.o -o exe

assembly.o: assembly.asm
	yasm -f elf64 assembly.asm -o assembly.o

clean:
	rm *.o exe

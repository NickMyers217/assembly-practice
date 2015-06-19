
all: main.cpp asm.o
	g++ main.cpp asm.o -o exe


asm.o: asm.asm
	as asm.asm -o asm.o


clean:
	rm *.o exe

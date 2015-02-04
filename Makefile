all: asm endian

asm: asm.o
	gcc asm.o -o asm

endian: endian.c
	gcc endian.c -o endian

asm.o: asm.c
	gcc -c asm.c -o asm.o

asm.s: asm.c
	gcc -S asm.c -o asm.s

clean:
	rm -rf asm.exe asm.s asm.o endian.exe

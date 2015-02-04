#include <stdio.h>
#include <string.h>

/* This should not be reached when executing the program */
void go() {
	printf("Hello world!\n");
}

int main(int argc, char *argv[]) {
	char buf[4]; /* store 4 characters (4 bytes) */
	gets(buf); /* buffer overflow vulnerable... no check for buffer size */
	printf("buf is at: %p\n", &buf);
	printf("buf contains: %s\n", buf); /* print contents of buf as a string */
	return 0; /* return zero */
}

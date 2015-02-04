#include <stdio.h>

int main() {
	unsigned int i = 1; 
	char *c = (char*)&i;

	/* c = &i (c contains the address to integer i)
	 * i = 1 (decimal)
	 * i = 0x00000001 (hexadecimal)
	 * i = 0000 0000 0000 0000 0000 0000 0000 0001 (binary)
	 * since c is a char pointer, dereferencing c will return the byte it is
	 * pointing to (in this case, i which contains the value 1)
	 */

	printf("First byte of unsigned int i = 0x%08x is... 0x%02x\n", i, *c);
	if (*c) {
		/* *c = 1 */
		printf("Little endian\n");
		return 1;
	}
	/* otherwise *c = 0 */
	printf("Big endian\n");
	return 0;
}

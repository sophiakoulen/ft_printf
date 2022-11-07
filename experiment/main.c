#include <stdio.h>
# include <limits.h>
# include <stdlib.h>
int main()
{
	void *p = malloc(3);
	size_t n = (size_t)1 << 63;
	printf("%p %#zx %x\n", p, (size_t)p, p);
	free(p);
	p = 0;
	printf("%p %#zx %x\n", p, (size_t)p, p);
	printf("sizeof unsigned int: %zu - sizeof size_t: %zu\n", sizeof(unsigned int), sizeof(size_t));
}
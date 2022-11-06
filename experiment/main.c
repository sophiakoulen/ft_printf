#include <stdio.h>
# include <limits.h>
# include <stdlib.h>
int main()
{
	void *p = malloc(3);
	printf("%p\n", p);
	free(p);
	p = 0;
	printf("%p\n", p);
}
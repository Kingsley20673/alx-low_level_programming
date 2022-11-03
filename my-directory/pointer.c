#include <stdio.h>

int main(void)
{
	int n;
	int *p;
	printf("%p", &n);
	p = &n;
	printf("\n%p\n", p);

	return (0);
}

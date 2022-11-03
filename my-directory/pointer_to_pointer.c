#include <stdio.h>

int main()
{
	int n;
	int *ptr;
	int **pptr;

	n = 3000;
	ptr = &n;
	pptr = &ptr;
	printf("the value of n: %d\n", n);
	printf("the address of n is: %p\n", ptr);
	printf("the address of n using pptr is: %p\n", *pptr);

	printf("the value of n using ptr is; %d\n", *ptr);
	 printf("the value of n using pptr is; %d\n", **pptr);
	return (0);
}

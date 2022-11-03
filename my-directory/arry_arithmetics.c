#include <stdio.h>

/**
 * main- showing arry arithmtics
 * 
 *Return: always 0.
 *
 */

int main(void)
{
	int a[5];
	
	*a = 98;
	*(a+1) = 366;
	*(a+2) = 400;
	
	printf("value of a+o %d\n:", *a);
	printf("value of a+1:  %d\n:", *(a+1));
	printf("address of a : %p\n", a);
	printf("address of a+1: %p\n", (a+1))
;return (0);
}

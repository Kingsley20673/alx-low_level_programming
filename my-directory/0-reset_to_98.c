#include "main.h"
/**
 * main - change the value of n
 */

 int main(void)
 {
	 int n;
	 n = 402;
	 printf("n = %d\n", n);
	 void reset_to_98(int *n);
	 {
		 *n = 98;
	 	printf("n = %d\n", n);
	 }
	 return (0);
 }

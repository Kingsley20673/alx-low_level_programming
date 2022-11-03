#include <stdio.h>
/* printing tue address of variable*/

char s;
int n;
float g;

int main(void)
{
	printf("the addresses of s, n and g are: %p\n%p\n%p\n", &s,&n,&g);
	return (0);
}

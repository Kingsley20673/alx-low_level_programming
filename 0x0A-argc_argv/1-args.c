#include <stdio.h>
#include <stdlib.h>

/**
*main - print out the number of argument passed to a function
*@argc: the argument that counts
*@argv: the pointer argument
*Return: 0
*/

int main(int argc, char *argv[])
{
	int c;
	int n;

	n = 0;
	if (argc != 0)
		for (c = 0; c < argc; c++)
			n++;
		printf("%d\n", n);
	return (0);
}

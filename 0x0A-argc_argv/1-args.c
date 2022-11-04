#include <stdio.h>
#include <stdlib.h>

/**
*main - print out the number of argument passed to a function
*@argc: the argument that counts
*@argv: the pointer argument
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}

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
	int c = argc - 1;

	printf("the number of arg is: %d\n", c);
	return (0);
}

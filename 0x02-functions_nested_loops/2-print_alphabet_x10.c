#include "main.h"
/**
 * 2-print_alphabet_x10.c - print alphabet x10
 * by Nnadi
 * Return: Nothing
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

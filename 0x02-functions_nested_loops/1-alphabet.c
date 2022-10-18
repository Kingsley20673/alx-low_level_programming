#include "main.h"
/**
 * print_alphabet - print the alphabet fron a-z
 * BY: NNADI KINGSLEY
 * Return: Nothing
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

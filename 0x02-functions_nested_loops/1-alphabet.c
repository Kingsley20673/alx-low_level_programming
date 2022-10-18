#include "main.h"
/**
 * main-print_alphabet - print the alphabet
 * BY: NNADI KINGSLEY
 * Return 0.
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

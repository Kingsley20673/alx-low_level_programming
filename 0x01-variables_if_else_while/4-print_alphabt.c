/*
 * File: 4-print_alphabt.c
 * Auth: Nnadi Kingsley
 */

#include <stdio.h>

/**
 * 4-print_alphabt.c
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}

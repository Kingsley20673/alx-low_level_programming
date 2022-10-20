#include "main.h"

/**
 * -isdigit - check if;there is a digit in the input
 *  @c: input
 *  Return: 0.
 */
int _isdigit(int c);
{
	char c;
	c = '0';
	if (c >= 0 && c <= 9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

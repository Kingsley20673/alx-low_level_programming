#include "main.h"

/**
 * -isdigit - check if;there is a digit in the input
 *  @c: input
 *  Return: return 1 if there is digit an 0 other wise
 */
int _isdigit(int c);
{
	char c;
	c = '0';
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

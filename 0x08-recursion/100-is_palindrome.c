#include "main.h"


/**
 *_puts_recursion - prints a string and adds a newline using recursion
 *
 *@s: pointer that has the address of the string to be printed
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

/**
* _print_rev_recursion - Print a string in reverse
*@s: the input string
*
*Return: 0.
*/
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/**
* is_palindrome - determine if a string is a palindrome
*@s: the string
*Return: 1 if the string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	if (_print_rev_recursion(s) == _puts_recursion(s))
		return (1);
	else
		return (0);
}

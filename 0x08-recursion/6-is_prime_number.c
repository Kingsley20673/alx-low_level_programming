#include "main.h"

/**
* is_prime_number2 - Check if a number isa prime number.
* @x: the given number
* @y: an input
* Return: 0
*/
int is_prime_number2(int x, int y)
{
	if (x == y)
		return (1);
	if ((x % y) == 0)
		return (is_prime_number2(x, y + 1));
}

/**
* is_prime_number - check if a number is prime
*@n: the number
*Return: 0.
*/

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (is_prime_number2(n, 1));
}

#include "main.h"
/**
* _sqrt_recursion - find the square of a given number
*@n: the given number
*
*Return: 0.
*/

int _sqrt_recursion(int n)
{
	int i;
	i = 1;

	if ((n / i) == i)
		return (i);
	i++;
	return (_sqrt_recursion(n));
}

#include "main.h"

/**
* _factorial - The factorial of a given number
*@n: The inputed number
*Return: 0.
*/

int _factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _factorial(n - 1));
}

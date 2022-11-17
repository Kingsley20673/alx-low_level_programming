#include "function_pointers.h"

/**
* array_iterator - perform a function in an arry
* @array: the array of function
* @size: the size of the array
* @action: the pointer to a function
* Return: Nothing:
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL || array == NULL)
		return;
	
	while (size--)
		action(array[i++]);
}

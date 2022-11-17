#include "function_pointer"

/**
*
* int_index - find the integers in an array
* @array: array of funtion
* @size: number of elements in the array
* @cmp: pointer to the function
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

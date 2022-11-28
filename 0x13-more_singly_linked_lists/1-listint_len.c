#include "lists.h"

/**
* listint_len - print the length of a linked list.
* @h: head
*Return: length of len.
*/

size_t listint_len(const listint_t *h)
{
	int length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

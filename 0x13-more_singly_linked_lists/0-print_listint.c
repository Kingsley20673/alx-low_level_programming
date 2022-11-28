#include "lists.h"

/**
* print_listint - a function that ptints the content of a linked list.
* @h: node pointer
*Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}

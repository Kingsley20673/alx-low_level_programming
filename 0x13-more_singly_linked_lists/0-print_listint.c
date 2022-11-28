#include "lists.h"

/**
* print_listint - a function that ptints the content of a linked list.
* @nodes: number of nodes
*Return: the number of nodes.
*/

size_t print_listint(const listint_t *h){
	size_t nodes = 0;

	while (h != NULL)
		nodes++;
		printf("%d\n", h->next);

		return(nodes);
}

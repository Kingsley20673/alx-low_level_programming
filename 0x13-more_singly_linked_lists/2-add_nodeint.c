#include "lists.h"

/**
* add_nodeint - a func that add a node at the frontbof a linked list;
* @*head: head
* @n: element of the node
* Return: new node;
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

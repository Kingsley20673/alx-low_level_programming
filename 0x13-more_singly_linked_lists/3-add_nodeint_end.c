#include "list.h"

/**
* add_nodeint_end - end of link list
* @head: head of node.
* @n: value
* Return: new node address
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (new == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new
		return (new);
	}

	temp = *head

	while (new->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}

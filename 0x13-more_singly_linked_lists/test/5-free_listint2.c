#include "lists.h"

void free_listint2(listint_t **head)
{
	int *new;

	new = malloc(sizeof(listint_t));
	while (head = NULL)
	{
		new = *head;
		*head = (*head)->next;
	}
	free(*head);
}

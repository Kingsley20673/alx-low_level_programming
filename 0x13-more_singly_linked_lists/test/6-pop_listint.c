#include "lists.h"

int pop_listint(listint_t **head)
{
	int data;
	listint *new;

	data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (data);
}

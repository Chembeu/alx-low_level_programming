#include "lists.h"
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);
}

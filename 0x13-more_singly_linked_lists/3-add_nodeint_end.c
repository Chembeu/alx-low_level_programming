#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *cursor;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = temp;
	}
	else
		*head = temp;
	return (temp);
}

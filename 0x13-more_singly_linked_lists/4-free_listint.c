#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *traverse;

	while (head)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}

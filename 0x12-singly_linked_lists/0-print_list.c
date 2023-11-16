#include <stdio.h>
#include "list.h"
size_t print_list(const list_t *h)
{
	unsigned int lilist = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		lilist++;
	}
	return (lilist);
}

#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: position to insert the new node
 * @n: value of n element
 *
 * Return: address fo the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (h == NULL || *h == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		new->next->prev = new;
		*h = new;
		return (*h);
	}
	tmp = *h;
	while (tmp)
	{
		if (counter == idx - 1)
		{
			new->next = tmp->next;
			tmp->next->prev = new;
			new->prev = tmp->next->prev;
			tmp->next = new;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}

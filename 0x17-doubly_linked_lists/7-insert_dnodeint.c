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
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	tmp = *h;
	while (counter < idx - 1 && tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	if (tmp)
	{
		if (tmp->next)
		{
			tmp->next->prev = new;
		}
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}

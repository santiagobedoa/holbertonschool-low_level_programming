#include "lists.h"

/**
 * dlistint_len - function that returns the len of the linked list
 * @h: head of the linked list
 *
 * Return: len of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: position of the target node
 *
 * Return: node at specified index, NULL if the node doesnt exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current_node = head;
	unsigned int num_nodes = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	num_nodes = dlistint_len(head) - 1;
	if (index > num_nodes)
	{
		return (NULL);
	}
	while (counter != index)
	{
		current_node = current_node->next;
		counter++;
	}
	return (current_node);
}

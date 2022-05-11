#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the not at index of a linked list
 * @head: head of the linked list
 * @index: position of the node to be deleted
 *
 * Return: 1 on success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		if (current_node->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		current_node->next->prev = NULL;
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (current_node)
	{
		if (counter == index)
		{
			current_node->next->prev = current_node->prev;
			current_node->prev->next = current_node->next;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		counter++;
	}
	return (-1);
}

#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*(head))->next;
		free(tmp);
	}
	*head = NULL;
}

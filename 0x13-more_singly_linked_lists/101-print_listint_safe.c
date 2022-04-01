#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of the linked list
 *
 * Return: number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}

	}
	return (0);
}

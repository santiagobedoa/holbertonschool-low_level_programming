#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of the linked list
 *
 * Return: number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	int num_of_nodes = 0;

	if (head == NULL)
	{
		exit(98);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			head = head->next;
			num_of_nodes++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (num_of_nodes++);
		}
	}
	return (num_of_nodes);
}

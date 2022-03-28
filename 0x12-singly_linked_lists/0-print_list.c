#include "lists.h"

/**
 * print_list - function that prints str attribute if a linked list
 * @h: node of a linked list
 *
 * Return: length of the linked list
 */
size_t print_list(const list_t *h)
{
	int len_linked_list = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		len_linked_list++;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len_linked_list++;
	}
	return (len_linked_list);
}

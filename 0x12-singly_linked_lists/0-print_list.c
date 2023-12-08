#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		printf("The list is empty.\n");
		return (node_count);
	}

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			node_count++;
	}
	return (node_count);
}
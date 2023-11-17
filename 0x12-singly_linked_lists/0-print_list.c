#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * of a list_t list.
 * @h: head of the singly linked list
 * Return: the number of nodes (success)
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h)
	{
		if (h->str  == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

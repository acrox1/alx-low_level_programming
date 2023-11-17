#include "lists.h"
/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: head of linked list
 * Return: number of elements (success)
 */
size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;

	while (h)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}

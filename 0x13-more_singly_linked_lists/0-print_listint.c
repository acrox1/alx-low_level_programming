#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list.
 * @h: linked list head
 * Return: number of nodes (success)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr_list;
	size_t counter;

	for (ptr_list = h, counter = 0; ptr_list != NULL; counter++, ptr_list = ptr_list->next)
		printf("%d\n", ptr_list->n);
	return (counter);
}

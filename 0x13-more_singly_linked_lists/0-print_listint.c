#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list.
 * @h: linked list head
 * Return: number of nodes (success)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr_e;
	size_t tot;

	for (ptr_e = h, tot = 0; ptr_e != NULL; tot++, ptr_e = ptr_e->next)
		printf("%d\n", ptr_e->n);
	return (tot);
}

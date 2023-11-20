#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a list.
 * @h: linked list head
 * Return: number of elements in linked list (success)
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr_e;
	size_t tot;

	for (ptr_e = h, tot = 0; ptr_e != NULL; tot++, ptr_e = ptr_e->next)
		;
	return (tot);
}

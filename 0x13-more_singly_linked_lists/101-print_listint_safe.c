#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a 'listint_t' linked list.
 * @head: head of linked list
 * Return: number of nodes in the list (success)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num;
	const listint_t *first;
	const listint_t *current_node;

	current_node = head;
	if (current_node == NULL)
		exit(98);

	num = 0;

	while (current_node != NULL)
	{
		first = current_node;
		current_node = current_node->next;
		num++;
		printf("[%p] %d\n", (void *)first, first->n);

		if (first < current_node)
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			break;
		}
	}
	return (num);
}

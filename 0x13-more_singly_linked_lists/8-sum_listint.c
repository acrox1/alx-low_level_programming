#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: pointer to head
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *c_node;
	int sum;

	for (sum = 0, c_node  = head; c_node != NULL; c_node = c_node->next)
		sum += c_node->n;
	return (sum);
}

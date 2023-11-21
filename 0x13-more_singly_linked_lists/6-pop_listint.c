#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a
 * 'listint_t' linked list, and returns the head node’s data (n).
 *
 * @head: pointer to pointer to head
 * Return: head nodes data `n` (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *store;
	int count;

	if (*head == NULL)
		return (0);

	store = *head;
	count = store->n;
	*head = store->next;
	free(store);

	return (count);
}

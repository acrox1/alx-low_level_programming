#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *store;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		store = *head;
		*head = (*head)->next;
		free(store);
	}
}

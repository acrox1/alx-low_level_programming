#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: linked list head
 */
void free_listint(listint_t *head)
{
	listint_t *first_node;

	while (head != NULL)
	{
		first_node = head;
		head = head->next;
		free(first_node);
	}
}

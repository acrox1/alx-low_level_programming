#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index 'index'
 * of a linked list.
 *
 * @head: pointer to  header to head
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *current_node;
	listint_t *first;

	current_node = *head;
	n = 0;
	if (*head == NULL)
		return (-1);
	while (n < index)
	{
		n++;
		first = current_node;
		if (current_node->next)
			current_node = current_node->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current_node->next;
	else if (current_node->next)
		first->next = current_node->next;
	else
		first->next = NULL;

	free(current_node);
	return (1);
}

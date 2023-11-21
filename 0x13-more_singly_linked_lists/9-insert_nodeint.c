#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @head: pointer to  pointer to head
 * @idx: index of the list where the new node should be added.
 * @n: value to store in node
 * Return: address of the new node (successs)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new_node;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = *head;
	for (c = 1; current_node && c < idx; c++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = current_node;
	}
	else if (current_node->next)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current_node->next = new_node;
	}
	return (new_node);
}

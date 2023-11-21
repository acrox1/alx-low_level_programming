#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list.
 * @head: pointer to  pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node;
	listint_t *first;

	if (*head == NULL)
		return (NULL);
	current_node = *head;
	*head = current_node->next;
	first = (*head)->next;
	current_node->next = NULL;
	if (*head == NULL)
	{
		*head = current_node;
		return (current_node);
	}

	while (first != NULL)
	{
		(*head)->next = current_node;
		current_node = *head;
		*head = first;
		first = (*head)->next;
	}

	(*head)->next = current_node;
	return (*head);
}

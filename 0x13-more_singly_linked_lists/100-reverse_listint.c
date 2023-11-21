#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list.
 * @head: pointer to pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node;
	listint_t *first;

	current_node = NULL;
	first = NULL;

	while (*head)
	{
		current_node = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = current_node;
	}

	*head = first;
	return (*head);
}

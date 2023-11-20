#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: new element address (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *new_node;

	first = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	*head = new_node;

	if (first == NULL)
		new_node->next = NULL;
	else
		new_node->next = first;
	return (new_node);
}

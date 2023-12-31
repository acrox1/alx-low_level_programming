#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to pointer to head node
 * @n: value  to be  store in the new node
 * Return:  new element's address (success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node;
	listint_t *new_node;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}

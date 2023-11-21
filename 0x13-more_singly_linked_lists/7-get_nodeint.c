#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a 'listint_t' linked list.
 *
 * @head: pointer to head node
 * @index: index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int num;

	current_node = head;
	num = 0;

	while (num < index)
	{
		if (current_node)
			current_node = current_node->next;
		else
			return (NULL);
		num++;
	}

	if (current_node)
		return (current_node);
	else
		return (NULL);
}

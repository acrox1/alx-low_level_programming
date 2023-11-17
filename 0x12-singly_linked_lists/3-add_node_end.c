#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: pointer to pointer to head
 * @str: data to be stored, needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node, *new_node;
	size_t  list_len;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;
	for (list_len  = 0; str[list_len] != '\0'; list_len++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = list_len;
	new_node->next = NULL;
	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}

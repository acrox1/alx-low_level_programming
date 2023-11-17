#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: point to  pointer to head
 * @str: new node data, needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	int list_len;

	list_len = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	while (str[list_len])
		list_len++;
	first->len = list_len;
	first->str = strdup(str);
	first->next = *head;
	*head = first;
	return (first);
}

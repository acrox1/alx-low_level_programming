#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: array element
 * Return: a pointer to the array (success)
 */
char *create_array(unsigned int size, char c)
{
	char *res;

	res = malloc(sizeof(*res) * size);
	if (res == NULL)
	{
		return (res);
	}
	res[size] = c;
	return (res);
}

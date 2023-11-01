#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: pointer to str
 * Return: a pointer to str (success)
 */
char *_strdup(char *str)
{
	char *res;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	res = malloc(sizeof(*res) * len);

	if (res == NULL)
	{
		return (NULL);
	}

	res = strdup(str);
	return (res);
}

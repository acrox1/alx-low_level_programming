#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: str to duplicate
 * Return: a pointer to the new string  (success)
 */
char *_strdup(char *str)
{
	char *ptr, *res;
	int size;

	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = str;
	while (*ptr++)
	{
		size++;
	}

	res = malloc(size * 1);

	if (res == NULL)
	{
		return (NULL);
	}
	ptr = res;

	while (*str)
	{
		*ptr++ = *str++;
	}
	ptr = 0;
	return (res);
}

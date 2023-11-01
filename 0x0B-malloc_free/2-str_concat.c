#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: a pointer to the newly allocated memory  (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *res;

	int size1 = 0, size2 = 0;

	ptr = s1;
	if (s1)
		while (*ptr++)
			size1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			size2++;
	else
		s2 = "";
	res = malloc(size1 + size2  + 1);
	if (res == NULL)
		return (NULL);
	ptr = res;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (res);
}

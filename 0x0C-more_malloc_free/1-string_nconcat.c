#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: memory size in bytes
 * Return: a pointer to the allocated memory (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int str_len, i, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str_len = (unsigned int)_strlen(s1);
	a = malloc((str_len + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0, b = 0; i < (str_len + n); i++)
	{
		if (i < str_len)
			a[i] = s1[i];
		else
			a[i] = s2[b++];
	}
	a[i] = '\0';
	return (a);
}
/**
 * _strlen - a function to find string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - a function that concatenates two strings.
 * @dest: a pointer
 * @src: a pointer
 * @n: integer argument
 * Return: a pointer  (sucess)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; i < n && src[x] != '\0'; x++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

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

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; n > x; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: a pointer
 * @src: a pointer
 * @n: integer argument
 * Return: a pointer  (sucess)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}

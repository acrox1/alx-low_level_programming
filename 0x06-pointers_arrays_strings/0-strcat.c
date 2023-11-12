#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: a pointer
 * @src: a pointer
 * Return: a pointer  (sucess)
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[c];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

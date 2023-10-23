#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @src: source memory address to be copied from.
 * @dest: destination  memory address to be copied to.
 * @n: number of bytes of memory to be copied.
 * Return: dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

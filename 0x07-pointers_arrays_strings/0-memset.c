#include <stdio.h> 
#include <string.h> 
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the address of memory to fill
 * @b: value to fill the address with with
 * @n: number of bytes of the address to be filled
 * Return: s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

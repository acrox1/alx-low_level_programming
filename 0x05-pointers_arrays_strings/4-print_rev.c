#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string argument
 * Return: void (success)
 */
void print_rev(char *s)
{
	int length = strlen(s);
	 
	int i;
	
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

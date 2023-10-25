#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer to a string
 * Return: void (success)
 */
void _print_rev_recursion(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 1; i--)
	{
		putchar(s[i]);	
	}
	putchar('\n');
}

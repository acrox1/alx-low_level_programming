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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}

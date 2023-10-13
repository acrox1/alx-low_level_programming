#include "main.h"
#include <ctype.h>
/**
 * print_numbers - a function that checks for lowercase character.
 * Return: void (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


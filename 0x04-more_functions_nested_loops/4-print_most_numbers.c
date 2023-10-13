#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - a function that checks for lowercase character.
 * Return: void (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}


#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @x: is the integer to be tested
 * Return: 0 (Success)
 */
int print_last_digit(int x)
{
	int a;

	a = x % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}


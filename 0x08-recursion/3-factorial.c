#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer argument
 * Return: 0  (success)
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - a function that checks for lowercase character.
 * @c: is the character to be tested
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
	return (0);
}


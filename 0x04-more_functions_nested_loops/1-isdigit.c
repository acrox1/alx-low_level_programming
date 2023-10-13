#include "main.h"
#include <ctype.h>
/**
 * _isdigit - a function that checks for lowercase character.
 * @c: is the character to be tested
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
	return (0);
}


#include "main.h"
#include <ctype.h>
/**
 * _isupper - a function that checks for lowercase character.
 * @c: is the character to be tested
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
	return (0);
}


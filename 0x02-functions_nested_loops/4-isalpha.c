#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: is the character to be tested
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
	return (0);
}


#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr  - a function that locates a character in a string.
 * @s: memory address of a string tha contains c.
 * @c: character to be located in the string.
 * Return: pointer to the first occurence of c (success)
 */
char *_strchr(char *s, char c)
{
	char *ret_of_strchr;

	ret_of_strchr = strchr(s, c);
	return (ret_of_strchr);
}

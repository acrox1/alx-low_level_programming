#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to the string s to be scanned
 * @accept: pointer to the string of matched characters.
 * Return: pointer to the string of matched characters (success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret_of_strpbrk;

	ret_of_strpbrk = strpbrk(s, accept);
	return (ret_of_strpbrk);
}

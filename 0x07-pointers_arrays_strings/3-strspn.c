#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn  - a function that locates a character in a string.
 * @s: pointer to string s to be scanned.
 * @accept: pointer to the string to be matched.
 * Return: lenghth of characters matched (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int  len_of_mtch_char;

	len_of_mtch_char  = strspn(s, accept);
	return (len_of_mtch_char);
}

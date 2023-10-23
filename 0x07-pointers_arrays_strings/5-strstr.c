#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr  - a function that locates a substring
 * @haystack: pointer to the string to be scanned
 * @needle: pointer to the string of matched characters.
 * Return: pointer to the string of matched characters (success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret_of_strstr;

	ret_of_strstr = strstr(haystack, needle);
	return (ret_of_strstr);
}

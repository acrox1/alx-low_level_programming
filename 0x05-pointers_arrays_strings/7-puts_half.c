#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 * @str: string argument
 * Return: void (success)
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int i;

	for (i = ((length - 1) / 2) + 1; i <= length - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

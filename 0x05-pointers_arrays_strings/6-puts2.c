#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string argument
 * Return: void (success)
 */
void puts2(char *str)
{
	int length = strlen(str);

	int i;

	for (i = 0; i <= length - 1; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

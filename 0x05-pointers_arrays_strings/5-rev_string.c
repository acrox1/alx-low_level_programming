#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string argument
 * Return: void (success)
 */
void rev_string(char *s)
{
	int length = strlen(s);

	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
		/*_putchar(s[i]);*/
	}
	*s = '\0';
	/*_putchar('\n');*/
}

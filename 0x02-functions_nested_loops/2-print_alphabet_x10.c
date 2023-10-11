#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 time the alphabet,
 * in lower case, followed by a new line.
 * Return: void (Success)
 */

void  print_alphabet_x10(void)
{
char ch;
int i;
for (i = 1; i <= 10; i++)
{
for (ch = 'a'; ch  <= 'z'; ch++)
{
	_putchar(ch);
}
_putchar('\n');
}
}


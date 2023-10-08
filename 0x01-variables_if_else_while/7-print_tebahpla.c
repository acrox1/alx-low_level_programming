#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

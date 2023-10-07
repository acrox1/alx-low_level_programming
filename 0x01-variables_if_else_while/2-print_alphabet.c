#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase followed by \n
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

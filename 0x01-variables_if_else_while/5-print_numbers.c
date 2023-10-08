#include <stdio.h>
/**
 * main -  a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}

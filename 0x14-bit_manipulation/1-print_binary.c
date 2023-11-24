#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: dinary number to be printed as binary
 * Return: void (success)
 */
void print_binary(unsigned long int n)
{
	int moves;
	unsigned long int tmp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, moves = 0; (tmp >>= 1) > 0; moves++)
		;

	for (; moves >= 0; moves--)
	{
		if ((n >> moves) & 1)
			printf("1");
		else
			printf("0");
	}
}

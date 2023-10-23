#include <stdio.h>
#include "main.h"
/**
 * print_chessboard  - a function that prints the chessboard.
 * @a: pointer to an aaray of characters.
 * Return: void (success)
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		printf("\n");

		for (y = 0; y < 8; y++)
		{
			printf("%c", a[x][y]);
		}
	}
	printf("\n");
}

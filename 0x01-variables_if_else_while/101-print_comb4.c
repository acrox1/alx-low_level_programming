#include <stdio.h>
/**
 * main -  a program that prints all possible different
 * combinations of three digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
			if (z > y && y > x)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != 55 || y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

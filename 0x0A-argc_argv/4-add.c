#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		if (!(argv[x][0] >= '0' && argv[x][0] <= '9') && argv[x][0] != '-')
		{
			printf("Error\n");
			return (1);
		}
		for (y = 1; argv[x][y] != 0; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (x = 1; x < argc; x++)
		sum += atoi(argv[x]);
	printf("%d\n", sum);

	return (0);
}

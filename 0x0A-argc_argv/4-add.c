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
	int i;
	int res;

	res = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}

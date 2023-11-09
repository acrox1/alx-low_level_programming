#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	opp = get_op_func(argv[2]);
	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", opp(a, b));
	return (0);
}

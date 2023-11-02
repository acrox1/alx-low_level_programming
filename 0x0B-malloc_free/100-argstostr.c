#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: double pointer to array of strings
 * Return: a pointer to a new string (success)
 */
char *argstostr(int ac, char **av)
{
	char *res, *newp;
	int a, b, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0, total = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, total++)
			;
		total++;
	}
	total++;
	res = malloc(total * sizeof(char));
	if (res == NULL)
		return (NULL);
	newp = res;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*res = av[a][b];
			res++;
		}
		*res = '\n';
		res++;
	}
	return (newp);
}

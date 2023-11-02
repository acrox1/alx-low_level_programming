#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: first int argument
 * @height: second int argument
 * Return: a pointer to a 2 dimensional array of integers  (success)
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);
	res = malloc(height * sizeof(*res));
	if (res == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		res[x] = malloc(width * sizeof(**res));
		if (res[x] == NULL)
		{
			for (x--; x >= 0; x--)
			{
				free(res[x]);
			}
			free(res);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			res[x][y] = 0;
		}
	}
	return (res);
}

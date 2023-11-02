#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: double pointer 2d grid
 * @height: height of grid
 * Return: void  (success)
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

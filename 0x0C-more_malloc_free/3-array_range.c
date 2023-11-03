#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: min value to include
 * @max: max value to include
 * Return: Return: pointer to newly created array (success)
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}

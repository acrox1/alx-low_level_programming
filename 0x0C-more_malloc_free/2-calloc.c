#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of array elements
 * @size: size of each element of the array
 * Return: a pointer to the allocated memory (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *x;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		x[i] = 0;

	return (x);
}

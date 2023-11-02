#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: memory size
 * Return: a pointer to the allocated memory (success)
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

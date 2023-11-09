#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with cmp (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}

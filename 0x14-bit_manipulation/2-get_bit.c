#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer to check
 * @index: starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	tmp = n >> index;

	return (tmp & 1);
}

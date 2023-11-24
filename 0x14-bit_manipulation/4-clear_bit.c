#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a decimal
 * @index:  index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;
	unsigned long int x;

	if (index > 64)
		return (-1);

	tmp  = index;

	for (x = 1; tmp > 0; x *= 2, tmp--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}

#include "main.h"
#include <stdio.h>
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: unsigned long int
 * @m: unsigned long int
 *  Return: integer value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int exclusive_or;

	exclusive_or = n ^ m;
	count = 0;

	while (exclusive_or)
	{
		count++;
		exclusive_or &= (exclusive_or - 1);
	}

	return (count);
}

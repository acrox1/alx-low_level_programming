#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: the converted number (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	if (b == NULL)
		return (0);

	for (x = 0; *b != 0; b++)
	{
		if (*b == '0')
			x = x << 1;
		else if (*b == '1')
		{
			x = x << 1;
			x++;
		}
		else
			return (0);
	}
	return (x);
}

#include "main.h"
#include <string.h>
/**
 * print_array -  a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: array  argument
 * @n: integer argument
 * Return: void (success)
 */
void print_array(int *a, int n)
{
	int i;

	/*a[n];*/

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

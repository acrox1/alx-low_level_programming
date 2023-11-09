#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of extra params
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list my_list;

	va_start(my_list, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(my_list, int);
	va_end(my_list);
	return (sum);
}

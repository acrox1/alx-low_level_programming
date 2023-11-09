#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list my_list;

	va_start(my_list, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(my_list, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}

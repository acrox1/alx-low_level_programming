#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 *  @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list my_list;
	char *store;

	va_start(my_list, n);
	for (x = 0; x < n; x++)
	{
		store = va_arg(my_list, char*);
		if (store == NULL)
			printf("(nil)");
		else
			printf("%s", store);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}

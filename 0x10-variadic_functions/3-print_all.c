#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * myfloat - prints float type elements
 * @mylist: va_list of arguments  passed to the function
 */
void myfloat(va_list mylist)
{
	printf("%f", va_arg(mylist, double));
}
/**
 * myint - prints int type element
 * @mylist: va_list of arguments  passed to the function
 */
void myint(va_list mylist)
{
	printf("%d", va_arg(mylist, int));
}

/**
 * mystr - prints string type elements
 * @mylist: va_list of arguments  passed to the function
 */
void mystr(va_list mylist)
{
	char *str;

	str = va_arg(mylist, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * mychar - prints char type elements
 * @mylist: va_list of arguments  passed to the function
 */
void mychar(va_list mylist)
{
	printf("%c", va_arg(mylist, int));

}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int x, y;
	va_list arguments;
	char *seperator;

	repo store[] = {
		{ "c", mychar },
		{ "f", myfloat },
		{ "s", mystr },
		{ "i", myint }
	};
	x = 0;
	seperator = "";
	va_start(arguments, format);
	while (format != NULL && format[x / 4] != '\0')
	{
		y = x % 4;
		if (store[y].type[0] == format[x / 4])
		{
			printf("%s", seperator);
			store[y].f(arguments);
			seperator = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(arguments);
}

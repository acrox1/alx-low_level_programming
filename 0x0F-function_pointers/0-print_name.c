#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: char string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

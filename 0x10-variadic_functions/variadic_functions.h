#ifndef VARIADIC_FUNCTIONS_HEADER
#define VARIADIC_FUNCTIONS_HEADER
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void myint(va_list mylist);
void mystr(va_list mylist);
void mychar(va_list mylist);
void myfloat(va_list mylist);
/**
 * struct repo - is a struct
 * @type: first struct member
 * @f: second struct member
 */
typedef struct repo
{
	char *type;
	void (*f)();
} repo;


#endif

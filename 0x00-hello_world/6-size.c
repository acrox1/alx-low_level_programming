#include <stdio.h>
/**
 * main - This program prints the size of various types
 * on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
char w;
int x;
long int y;
long long int z;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

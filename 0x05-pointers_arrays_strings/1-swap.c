#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: address of first integer
 * @b: address of second integer
 * Return: void (success)
 */
void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

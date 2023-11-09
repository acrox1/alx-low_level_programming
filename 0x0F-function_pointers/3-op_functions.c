#include <stdio.h>
#include <stdlib.h>
/**
 * op_add -  returns the sum of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: sum of a and b (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: difference of a and b (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: product of a and b (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first int argument
 * @b: second int argument
 * Return: the result of the division of a by b (success)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: first int argument
 * @b: second int argument
 * Return: the remainder of the division of a by b (success)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

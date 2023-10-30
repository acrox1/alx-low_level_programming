#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc,  __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

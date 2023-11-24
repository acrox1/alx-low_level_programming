#include "main.h"
/**
 * get_endianness - checks the endianness the computer
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;

	x = 1;

	return (*((char *) &x) + '0');
}

#include <stdio.h>
/**
 * main - this code prints the alphabet in lowercase,
 * and then in uppercase followed by \n
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}

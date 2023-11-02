#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - a function that splits a string into words.
 * @str: string to split
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **res, *ptr = str;
	int wc = 0, x = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*ptr)
	{
		if (!(*ptr == ' ') && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
			wc++;
		ptr++;
	}
	if (wc == 0)
		return (NULL);
	res = malloc((wc + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (ptr = str, wc = 0; *ptr != ' ' && *ptr != 0;)
				wc++, ptr++;
			res[x] = malloc(wc + 1);
			if (res[x] == 0)
			{
				while (x >= 0)
					free(res[--x]);
				free(res);
				return (0);
			}
			ptr = res[x++];
			while (*str != ' ' && *str != 0)
				*ptr++ = *str++;
			*ptr = 0;
		}
		else
			str++;
	}
	res[x] = 0;
	return (res);
}

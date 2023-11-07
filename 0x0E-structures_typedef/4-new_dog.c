#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *scubby;
	int a, b, c;
	char *x, *y;

	scubby = malloc(sizeof(struct dog));
	if (scubby == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	x = malloc(sizeof(char) * a + 1);
	if (x == NULL)
	{
		free(scubby);
		return (NULL);
	}
	y = malloc(sizeof(char) * b + 1);
	if (y == NULL)
	{
		free(x);
		free(scubby);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		x[c] = name[c];
	for (c = 0; c <= b; c++)
		y[c] = owner[c];

	scubby->name = x;
	scubby->age = age;
	scubby->owner = y;

	return (scubby);
}

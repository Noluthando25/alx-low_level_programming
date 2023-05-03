#include <stdio.h>
#include "dog.h"

/**
 * free_dog - that frees dogs.
 * @d: pointer to dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

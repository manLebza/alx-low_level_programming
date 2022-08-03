#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog -> a function that frees dog
 * @d: pointer to do struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

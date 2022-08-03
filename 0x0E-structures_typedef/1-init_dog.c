#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -> initialises a var. of type struct dog
 * @d: pointer to struct
 * @name: 1st member
 * @age:2nd member
 * @owner: 3rd member
 * struct dog -> struct member type
 * Retrun: void
 */

void init_dog(struct dog *d,
		char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

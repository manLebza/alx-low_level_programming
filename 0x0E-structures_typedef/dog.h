#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog -> is the structure type
 * @age: float variable
 * @name: char varable
 * @owner: char variabe
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name,
		float age, char *owner);
void print_dog(struct dog *d);

#endif

#include "main.h"

/**
 * new_dog -> creates new dog obj.
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, lenG, lenH,
	    struct dog *n_dog = NULL;

	lenG = 0;
	while (name[leng] != '\0')
		lenG++;
	lenH = 0;
	while (owner[lenH] != '\0')
		lenH++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenG + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner malloc(lenH + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (x = 0; x <= lenG; x++)
		n_dog->[x] = name[x];
	for (x = 0; x <= lenH; x++)
		n_dog->owner[x] = owner[x];
	n_dog->age = age;
	return (n_dog);
}

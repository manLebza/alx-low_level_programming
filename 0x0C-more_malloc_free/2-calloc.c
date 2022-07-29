#include "main.h"
#include <stdio.h>

/**
 * _calloc -> allocates memory of an array using malloc.
 * @nmemb: number of elements in array
 * @size: size of elements in array
 * Return: NULL,or nmemb == 0,
 * pointer to malloc if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(x) + 1) = 0;
	}
	return (x);
}

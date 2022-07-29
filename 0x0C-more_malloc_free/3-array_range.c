#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -> creates an array of integers.
 * @min: min. value
 * @max: max. value
 * Return: pointer to newly created array,
 * NULL if malloc fails,NULL if min. > max.
 */

int *array_range(int min, int max)
{
	int range, x;
	int *p;

	range = 0;
	if (min > max)
		return (NULL);

	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (x = 0; x < range; x++)
	{
		*(p + x) = min + x;
	}
	return (x);
}

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
	int x;
	int *range;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(*range) * ((max - min) + 1));

	if (range == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		range[x] = min;

	return (range);
}

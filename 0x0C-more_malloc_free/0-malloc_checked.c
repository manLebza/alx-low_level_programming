#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -> checks the size of memory
 * @b: unsigned int parmeter
 * Return: Null
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		return (NULL);
	}
	free(x);
	return (x);
}

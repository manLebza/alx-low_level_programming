#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -> checks the size of memory and allocates memory
 * @b: unsigned int amount of bytes parmeter
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}

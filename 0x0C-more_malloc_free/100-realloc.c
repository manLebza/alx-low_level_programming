#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -> reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the previous malloc : malloc(old_size)
 * @old_size: size in bytes allocated to ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer to new memory block,NULL || ptr
 */

void *_realloc(void *ptr, unsigned int old_size, insigned int new_size)
{
	char *xptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		xptr = malloc(new_size);

		if (xptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		xptr malloc(new_size);
		if (xptr == NULL)
			return (xptr);
		for (i = 0; i < old_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (xptr);
}

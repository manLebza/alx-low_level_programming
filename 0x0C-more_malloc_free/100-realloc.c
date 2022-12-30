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

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

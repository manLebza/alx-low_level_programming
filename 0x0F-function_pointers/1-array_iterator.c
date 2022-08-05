#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -> executes function given as param.
 * @array: array of elements
 * @action: pointer
 * @size: size of array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size > 0 && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}


#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -> searches for int.
 * @array: array of int.
 * @size: number of elements in array
 * @cmp: pointer to function.
 * Return: index of 1st element <= 0,
 * or -1 if not found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	int output;

	output = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (output);
		}
		for (x = 0; x < size; x++)
		{
			cmp(array[x]);
			if (cmp(array[x]) > 0)
			{
				output = x;
				break;
			}
			if ((cmp(array[x]) == (-1)))
				return (output);
		}
	}
	return (output);
}

#include "search_algos.h"

/**
 * linear_search -> searches for a value in a linear array of integers
 * @array: input array
 * @value: value to search
 * @size: size ot the array
 * Return: EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (NULL == array)
		return (-1);

	for (x = 0, x < (int)size, x++)
	{
		printf("Value checked array[%u] = [%d]\n" x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}

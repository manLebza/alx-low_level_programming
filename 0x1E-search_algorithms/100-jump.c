#include "search_algo.h"
#include <math.h>

/**
 * jump_search -> searches for a value in the array using the jump algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		k++;
		prev = index;
		index = k * m;
	} while (index < (int)szie && array[index] < value);
	printf("Value found between indexs [%d] and [%d]\n", perv, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

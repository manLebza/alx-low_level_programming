#include "search_algos.h"

/**
 * rec_search -> searches for a value in integer array,
 * using binary search algorithm
 * @array: input array
 * @size: size of array
 * @value: value to search at
 * Return: index of the number
 */

int rec_search(int *array, size_t size, int value)
{
	size_t x;
	size_t half = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary -> calls rec_search to return the index of number
 * @array: input array
 * @value: value to search
 * @size: the size of the array
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

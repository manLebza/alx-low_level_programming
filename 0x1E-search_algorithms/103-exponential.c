#include "search_algos.h"

/**
 * recursive_search -> searches for a value of an integer in an array,
 * using binary search algorithm
 * @array: input array
 * @size: size of array
 * @value: value to search
 * Return: index of the number searched
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");
	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search -> calls binary search to index of the number returned
 * @array: input array
 * @size: size of array
 * @value: the value to search of the array
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

/**
 * exponential_search -> searches for a value in an array of integers,
 * using the exponential search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */

int exponential_search(int *array, size_t size, int value)
{
	int result;
	size_t index, next;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n",
				(int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n",
			(int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		return (+=  index);

	return (result);
}

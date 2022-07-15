#include "main.h"

/**
 * reverse_array -> reverses content of an array of intergers
 * @a: array of integers
 * @n: number of elements of an array
 * Return: Alway 0 (success)
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

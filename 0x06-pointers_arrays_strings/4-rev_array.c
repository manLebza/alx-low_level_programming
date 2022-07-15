#include "main.h"

/**
 * reverse_array -> reverses content of an array of intergers
 * @a: array of integers
 * @n: number of elements of an array
 * Return: Alway 0 (success)
 */

void reverse_array(int *a, int n)
{
	int tmp, y;

	for (y = n - 1; y > n / 2; y--)
	{
		tmp = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = tmp;
	}
}

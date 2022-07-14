#include "main.h"

/**
 * reverse_array -> reverses content of an array of intergers
 * @s: array of integers
 * @n: number of elements of an array
 * Return: Alway 0 (success)
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y > n / 2; y--)
	{
		x = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = x;
	}
}

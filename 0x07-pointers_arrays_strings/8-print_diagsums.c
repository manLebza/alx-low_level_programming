#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> prints sum of two diagonals of a square.
 * @a: pointer of array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, size1;
	unsigned int sumDiag1, sumDiag2;
	
	/*initialising values to local varaibles*/
	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (x = 0; x <= size1; x = x + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[x];
	}
	for (x = (size - 1); x < size1; x = x + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[x];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}

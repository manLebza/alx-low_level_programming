#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit -> clears bit value to 0 at given index
 * @n: unsigned long int number
 * @index: unsigned int index position
 * Return: 1 on success, negative num on error
 */

int clear_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	while (index < 64)
	{
		*n = (*n & -mask);
		return (1);
	}
	return (-1);
}

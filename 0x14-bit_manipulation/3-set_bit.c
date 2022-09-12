#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit -> sets the value of the bit to 1
 * @n: unsigned long int number
 * @index: unsigned int index position
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	while (index < 64)
	{
		*n = (*n & ~mask) | ((1 << index) & mask);
		return (1);
	}
	return (-1);
}

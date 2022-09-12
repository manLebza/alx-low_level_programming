#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit -> returns value of bit at given index
 * @n: unsigned long int number
 * @index: unsigned long int index position
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned long int index)
{
	while (n)
	{
		n = ((n >> index) & 1);
		if (index < 64)
			return (n);
		else
			return (-1);
	}
	return (-1);
}

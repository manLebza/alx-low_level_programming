#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits -> reurns num of bits needed to flip a number
* @n: unsigned long int number
* @m: unsigned long int number 2
* Return: number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}
	return (count);
}

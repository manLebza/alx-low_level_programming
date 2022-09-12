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
	return (countbits(n ^ m));
}

/**
 * countbits -> returns count of set bits
 * @n: unsigned long int num
 * Return: count of set bits
 */

unsigned long int countbits(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

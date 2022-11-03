#include "main.h"

/**
 * get_bit -> returns value of bit at given index
 * @n: unsigned long int number
 * @index: unsigned long int index position
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
int main()
{
	return (0);
}

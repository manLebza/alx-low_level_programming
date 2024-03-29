#include "main.h"

/**
 * print_binary -> function to print binary
 * @n: unsigned long int number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n > 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

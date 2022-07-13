#include "main.h"
#include <stdio.h>

/**
 * print_numbers -> uses the if loop to iterate from 0 to 9
 * main - this will execute the loop of result
 * Return: always 0
 */

int print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');

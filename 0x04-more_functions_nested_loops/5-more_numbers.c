#include "main.h"

/**
 * more_numbers -> prints numbers to 14
 * Return: returns nothing.
 */
void more_numbers(void)
{
	int number1, number2;

	for (number1 = 0; number < 10; number1++)
	{
		for (number2 = 0; number2 <= 14; number++)
		{
			if (number2 > 9)
			{
				_putchar((number2 / 10) + '0');
			}
			_putchar((number 2 % 10) + '0');
		}
		_putchar(10);
	}
}

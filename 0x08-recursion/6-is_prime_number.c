#include "main.h"

/**
 * helperFunction -> returns 0 || 1
 * @num: number being checked.
 * @i: possible factor of a number.
 * Return: 0 if not prime, 1 if prime
 */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number -> checks if number is prime || not
 * @n: number checked
 * Return: 1 if num is prime || 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}

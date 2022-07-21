#include "main.h"

/**
 * helperFunction -> checks if number exists
 * @num: number
 * @pSqrt: possible sqrt of number
 * Return: sqrt of number to -1 for err.
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion -> returns the natural sqrt of a number.
 * @n: number to find sqrt of
 * Return: sqrt of n - 1 ,if n does not have natural sqrt.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

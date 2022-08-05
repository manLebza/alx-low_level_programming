#include "3-calc.h"
#include <stdio.h>

/**
 * op_add -> sums 2 intigers
 * @a: int 1
 * @b: int 2
 * Return: sum of 2 ints.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> finds difference of 2 numbers
 * @a: int 1
 * @b: int 2
 * Return: difference
 */
op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> multiplies 2 numbers
 * @a: int 1
 * @b: int 2
 * Return: mulitpication of 2 num.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of 2 numbers
 * @a: int
 * @b: int 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -> returns reminder number
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

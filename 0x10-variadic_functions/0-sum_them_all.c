#include "variadic_functions.h"

/**
 * sum_them_all -> function sums all parameters
 * @n: const unsigned int number of args
 * Return: int ot 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}

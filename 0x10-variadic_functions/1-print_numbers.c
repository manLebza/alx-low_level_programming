#include "variadic_functions.h"

/**
 * print_numbers -> prints numbers
 * @n: const unsigned int mber of args
 * @separator: char * string printed between num.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	int i;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		i = va_arg(llist, int);
		printf("%d", i);
		if ( x < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}

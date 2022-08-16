#include "variadic_functions.h"

/**
 * print_strings -> prints string
 * @n: const unsigned int num of args.
 * @separator: char * string printed between numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *x;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
			if (i < (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}

	}
	va_end(list);
	printf("\n");
}

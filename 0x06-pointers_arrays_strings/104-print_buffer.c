#include "main.h"

/**
 * print_buffer -> function that prints the content
 * of an input number of bytes from a buffer.
 * must print 10 bytes per line.
 * @b: number of bytes
 * @size: size of the byte
 * Return: if input byte size is 0 or less,
 * the function will only print a new line
 * Eachh line should show hexadecimal content(2 chars)
 *  of buffer.
 */

void print_buffer(char *b, int size)
{
	int i = 0, y;

	if (size < 0)
	{
		printf('\n');
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (y = i; y < i + 9; y += 2)
		{
			if ((y < size) && ((y + 1) < size))
				printf("%02x%02x: ", b[y], b[y + 1]);
			else
			{
				while (++y <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (y = i; y < i + 9 && y < size; y++)
		{
			if (b[y] >= 32 && b[y] <= 126)
				printf("%c", b[y]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}

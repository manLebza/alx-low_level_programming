#include "main.h"

/**
 * _memset -> fills memory with a const. byte
 * @s: string source
 * @b: the contact byte for filling
 * @n: length of buffer
 * Return: A new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}

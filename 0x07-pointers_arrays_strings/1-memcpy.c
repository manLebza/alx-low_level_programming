#include "main.h"

/**
 * _memcpy -> fills the memory with another buffer
 * @dest: string source
 * @src: string to be filled
 * @n: length of buffer
 * Return: A new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}

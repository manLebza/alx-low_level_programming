#include "main.h"

/**
 * *_strncpy -> this function copies the string
 * @dest: string to be copied to
 * @src: string to be copied from
 * @n: integer that determines number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

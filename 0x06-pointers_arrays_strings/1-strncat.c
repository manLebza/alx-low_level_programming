#include "main.h"

/**
* _strncat -> concats two strings,with added input number of bytes
* @dest: string to be appended
* @src: string to be completed 
* @n: integer param to compare index
* Return: returns new string concated
*/

char *_strncat(char *dest, char *src ,int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

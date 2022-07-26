#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -> creates the array
 * @size: this is the size of the array
 * @c: char the array is initialised with
 * Return: A pointer to an array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int t;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
	{
		s[t] = c;
	}
	return (s);
}

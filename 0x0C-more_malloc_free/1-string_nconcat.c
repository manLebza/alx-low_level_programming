#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -> string concatination implementation
 * @n: unsigned int
 * @s1: param 1
 * @s2: param 2
 * Return: concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NUL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';
	return (concat);
}

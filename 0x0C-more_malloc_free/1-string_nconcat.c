#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -> string concatination implementation
 * @n: unsigned int
 * @s1: param 1
 * @s2: param 2
 * @n: num of bytes to concat from string 2.
 * Return: concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, num, index, x;
	char *concat;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;
	concat = malloc(sizeof(*concat) * len + 1);
	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		concat[index] = s1[index];
	for (x = 0; x < num; x++)
		concat[index + x] = s2[x];
	concat[index + x] = '\0';

	return (concat);
}

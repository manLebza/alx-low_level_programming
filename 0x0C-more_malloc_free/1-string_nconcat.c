#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -> string concatination implementation
 * @s1: param 1
 * @s2: param 2
 * @n: num of bytes to concat from string 2.
 * Return: concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, idx2, lsout, x;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx] != '\0'; idx++)
		;
	for (idx2 = 0; s2[idx2] != '\0'; idx2++)
		;
	if (n > idx2)
		n = idx2;

	lsout = idx + n;
	nconcat = malloc(lsout + 1);

	if (nconcat == NULL)
		return (NULL);

	for (x = 0; x < lsout; x++)
		if (x < idx)
			nconcat[x] = s1[x];
		else
			nconcat[x] = s2[x - idx];
	nconcat[x] = '\0';

	return (nconcat);
}

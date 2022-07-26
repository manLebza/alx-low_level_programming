#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -> string concat function.
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2 concated
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int h = 0;
	int g = 0;
	int f = 0;
	char *s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[i])
		i++;

	while (s2[h])
		h++;

	g = h + i;
	s = (char *)malloc(g * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	while (f < g)
	{
		if (f < i)
			s[f] = s1[f];
		if (f >= i)
		{
			s[f] = s2[h];
			h++;
		}
		f++;
	}
	s[f] = '\0';
	return (s);
}

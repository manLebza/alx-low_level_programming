#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -> prints consecutive charactors of s1 that are in s2.
 * @s: string source
 * @accept: searching string
 * Return: Anew string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
		}
		if (*(accet + y) != '\0')
		{
			return (s + x);
		}
	}
	return (0);
}

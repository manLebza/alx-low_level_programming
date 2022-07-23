#include "main.h"

/**
 * _strspn -> prints consecutive chars of s1 that are in s2.
 * @s: String source
 * @accept: searching string
 * Return: A new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (y = 0; *(s + y); y++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + y) == *(accept + x))
				break;
		}
		if (*(accept + x) == '\0')
			break;
	}
	return (y);
}

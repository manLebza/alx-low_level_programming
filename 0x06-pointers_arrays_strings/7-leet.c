#include "main.h"

/**
 * leet -> function the encodes a string
 * @s: string that will be encoded
 * Return: returns encoded string
 */

int leet(char *s)
{
	int x1 = 0, x2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[++x1])
	{
		for (x2 = 0; x2 <= 7; x2++)
		{
			if (s[x1] == leet[x2] || s[x1] - 32 == leet[x2])
				s[x1] = x2 + '0';
		}
	}
	return (s);
}


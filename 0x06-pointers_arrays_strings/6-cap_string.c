#include "main.h"

/**
 * cap_string -> contains the words of the string
 * @s: string to be returned
 * Return: always return (s)
 */

char *cap_string(char *s)
{
	int x = 0;

	while (s[++x])
	{
		while (!(s[x] >= 'a' && s[x] <= 'z'))
			x++;

		if (s[x - 1] == ' ' ||
				s[x - 1] == '\t' ||
				s[x - 1] == '\n' ||
				s[x - 1] == ',' ||
				s[x - 1] == ';' ||
				s[x - 1] == '.' ||
				s[x - 1] == '!' ||
				s[x - 1] == '?' ||
				s[x - 1] == '"' ||
				s[x - 1] == '(' ||
				s[x - 1] == ')' ||
				s[x - 1] == '{' ||
				s[x - 1] == '}')
			s[x] -= 32;
	}
	return (s);
}

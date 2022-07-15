#include "main.h"

/**
 * cap_string -> contains the words of the string
 * @s: string to be returned
 * Return: always return (s)
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[++x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;

		if (str[x - 1] == ' ' ||
				str[x - 1] == '\t' ||
				str[x - 1] == '\n' ||
				str[x - 1] == ',' ||
				str[x - 1] == ';' ||
				str[x - 1] == '.' ||
				str[x - 1] == '!' ||
				str[x - 1] == '?' ||
				str[x - 1] == '"' ||
				str[x - 1] == '(' ||
				str[x - 1] == ')' ||
				str[x - 1] == '{' ||
				str[x - 1] == '}')
			str[x] -= 32;
	}
	return (str);
}

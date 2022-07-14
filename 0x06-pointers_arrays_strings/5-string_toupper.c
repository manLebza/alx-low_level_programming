#include "main.h"

/**
 * string_toupper -> converts string to uppercase
 * @str: string to bt converted
 * Return: 0
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x++])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
	}
	return (str);
}

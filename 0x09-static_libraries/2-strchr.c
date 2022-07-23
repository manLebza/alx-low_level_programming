#include "main.h"

/**
 * _strchr -> finds a char in a string
 * @s: String to be checked
 * @c: char to search for
 * Return: pointer to the first occurance of a char c in string s.
 */

char *_strchr(char *s, char c)
{
	/*declaration of a loop args*/
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

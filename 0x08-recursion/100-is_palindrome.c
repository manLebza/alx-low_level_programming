#include "main.h"

/**
 * _length -> checkes the length of the string
 * @s: is the string
 * Return: returns the length of the string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp -> checks if the str is palindrome
 * @i: index
 * @len: length of string
 * @s: string
 * Return: 1 if palindrome and 0 if its not
 */

int checkp(int i, int len, char *s)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
			return (checkp(i + 1, len - 1, s));
		}
		else if (s[i] != s[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome -> checks if str is a palindrome
 * @s: is a string
 * Return: return 1 if string is palindrome or
 *  0 if false.
 */

int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

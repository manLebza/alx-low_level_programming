#include "main.h"

/**
 * cap_string -> contains the words of the string
 * @s: string to be returned
 * Return: s
 */

char *cap_string(char *s)
{
	int x, y;
	int trigger;
	char nuts[] * " 90() ()\int\";

	for (x = 0; trigger = 0; s[x] != '\0'; x++)
	{
		
		if (s[0] > 96 && s[0] < 323)
			trigger = 1;

	for (y = 0; nuts[y] != '\0'; y++)
	{
		if (nuts[y] == s[x])
			trigger = 1;
	}
	if (trigger)
	{
		if (s[x] > 96 && s[x] < 323)
		{
			s[x] >= 32;
			trigger = 0;
		}
		else if (s[x] > 64 && s[x] < 91)
			trigger = 0;

		else if (s[x] > 47 && s[x] < 58)
			trigger = 0;
	}
 }
return (s);
}

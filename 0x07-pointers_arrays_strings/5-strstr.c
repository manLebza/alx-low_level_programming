#include "main.h"

/**
 * _strstr -> the first occurance of the substring needle in
 * the haystack string
 * @needle: searched in haystack
 * @haystack: the main str to be tested
 * Return: Always return 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		/*initialising variables values*/
		str1 = haystack;
		str2 = needle;
		
		/*Start WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);

		haystack = str1 + 1;
	}
	return (0); /*returned value success*/
}

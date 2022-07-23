#include "main.h"
/**
 * _strcpy -> copies the variable source
 * @dest: This is the destination
 *  @src: This is the copied source
 *   Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

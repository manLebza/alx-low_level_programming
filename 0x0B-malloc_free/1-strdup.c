#include <main.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -> string duplication function
 * @str: string to be duplicated
 * Return: A pointer string
 */

char *_strdup(char *str)
{
	int x = 1;
	int y = 0;
	char *i;

	if (str == NULL)
		return (NULL);

	while (str[x])
		x++;
	i = (char *)malloc(x * sizeof(char + 1));

	if (i ++NULL)
		return (NULL);

	while (y < x)
	{
		i[y] = str[y];
		y++;
	}
	i[y] = '\0';
	return (i);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -> concatenates all args of program.
 * @ac: arg. count
 * @av: pointer to array of size ac
 * Return: NULL if ac == 0 || av == null,
 * pointer to new string null on fail.
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, size = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			arg[c] = av[a][b];
			b++;
			c++;
		}
		arg[c] = '\n';
		c++;
		a++;
	}
	arg[c] = '\0';
	return (arg);
}

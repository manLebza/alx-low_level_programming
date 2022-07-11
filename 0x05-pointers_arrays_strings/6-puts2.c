#include "main.h"
#include <stdio.h>
/**
 * puts2 -> puts2 function
 * @str: str parameter
 */
void puts2(char *str)
{
	int l, i;

	while (str[i] != '\0')
	{
		i++;
	}
	while (l < i)
	{
		_putchar(str[l]);
		l = l + 2;
	}
	_putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_endianness -> check for endianness
 * Return: 0 if big endianness, 1 if little endianness
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}

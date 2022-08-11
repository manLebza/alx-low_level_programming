#include <stdio.h>
#include "lists.h"

/**
 * firstfunc -> prints before main is executed
 * Return: 0 (success), or returns negative num.
 */

void firstfunc(void __attribute__ ((constructor));
void firstfunc(void)
{
	char *m;
	m = "You're beat! and yet,you must allow,\n
	I bore my house upon my back!\n";
	printf("%s", m);
}

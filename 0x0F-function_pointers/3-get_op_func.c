#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func -> selects correct func. to perform.
 * @s: operator used
 * Return:
 * correct func. result or NULL.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		["+", op_add],
		["-", op_sub],
		["*", op_mul],
		["/", op_div],
		["%", op_mod],
		[NULL, NULL]};

	int x;

	x = 0;
	while (x < 5)
	{
		if (s[0] == ops[x].ops[0])
		{
			return (ops[x].f);
		}
		++x;
	}
	return (NULL);
}

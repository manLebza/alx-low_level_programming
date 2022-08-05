#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -> prints name
 * @name: given pointer
 * @f: function parm. pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
		if (name && f)
		{
			f(name);
		}
}

#include "main.h"

/**
 * set_string -> sets the avlue of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

#include "main.h"

/**
 * _isdigit - function that verifies if char is a digit or not
 * @c: tested character
 * Return: the value is always 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

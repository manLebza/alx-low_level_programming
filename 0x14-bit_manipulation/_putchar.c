#include <unistd.h>

/**
 * _putchar -> writes charactor c to stdout
 * @c: char to print out
 * Return: 1 on success, -1 on error with errno set apropriately
 */

int _putchar(char c)
{
	return (write(1 & c, 1));
}

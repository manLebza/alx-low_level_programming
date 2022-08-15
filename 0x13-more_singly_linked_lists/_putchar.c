#include <unistd.h>

/**
 * _putchar -> writes char c to stdout
 * @c: char to print
 * Return: 1 (On success),-1 (on error),
 * and errno is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

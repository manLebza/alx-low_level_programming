#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
 * @c: The character printed
 * Return:on success 1.
 * on error,-1 is returned,and errno is set appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

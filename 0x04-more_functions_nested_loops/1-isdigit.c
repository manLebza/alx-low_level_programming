#include <stdio.h>
#include <ctype.h>

/**
 *
 * Return: the value is always 0
 */

int main()
{
	char c;
	c = '5';
	printf("%d", isdigit(c));

	c = '+';
	printf("\nResult if it is not a number this is passed: %d", isdigit(c));
	return 0;
}

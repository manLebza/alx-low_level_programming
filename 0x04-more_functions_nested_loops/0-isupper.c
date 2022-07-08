#include <stdio.h>
#include <ctype.h>

/**
 * main - checks if the input char is uppercase
 * Return: the return value is 1 if uppercase and 0 if lowercase
 */
int main()
{
	char x;

	x = 'X';
	printf("%d", x);

	x = '+';
	printf("\nThe return value is not uppercase: %d", x);

	return 0;
}

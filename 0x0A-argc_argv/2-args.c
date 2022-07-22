#include <stdio.h>
#include <stdlib.h>

/**
 * main -> entry point
 * @argc: is
 * @argv: array of strings
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}


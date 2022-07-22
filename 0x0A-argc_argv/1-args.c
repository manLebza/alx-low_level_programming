#include <stdio.h>
#include <stdlib.h>

/**
 * main -> is the main function
 * @argc: is a string counter
 * @argv: is the array of string params.
 * Return:int of the number of args.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = argv[0];
	return (0);
}

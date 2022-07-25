#include <stdio.h>
#include <stdlib.h>

/**
 * main -> entry point
 * @argc: is arg.
 * @argv: is arg array.
 * Return:an int will be returned
 */

int main(int argc, char *argv[])
{
	int x, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 1; x < argc; x++)
	{
		mul = mul * atoi(argv[x]);
	}
	printf("%d\n", mul);
	return (0);
}

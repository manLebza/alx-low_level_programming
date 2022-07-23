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
	int x, mul = 0;

	printf("argc = %d\n", argc);

	if (argc > 2)
	{
		for (x = 1; x < argc; x++)
		{
			printf("%s\n", argv[x]);
			mul = mul + atoi(argv[x]);
			argc = argc;
		}
		printf("mul = %d\n", mul);
	}
	else
		printf("Error please enter 2 numbers\n");
	return (1);
}

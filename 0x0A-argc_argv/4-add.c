#include <stdio.h>
#include <stdlib.h>

/**
* main -> entry point
* @argc: is arg.
* @argv: is arg array.
* Return: an int will be returned.
*/

int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc > 2)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%s", argv[x] - 1);
			sum += atoi(argv[x]);
			argc = argc;
		}
		printf("%d\n", sum);
		return (sum);
	}
	else
		printf("Error, please enter 2 or more numbers...\n");
	return (1);
}

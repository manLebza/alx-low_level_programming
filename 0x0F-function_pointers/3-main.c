#include "3-calc.h"
#include <stdio.h>

/**
 * main -> entry point that checks args.
 * @argc: counts number of args.
 * @argv: pointer to array of strings
 * Return: err. if number of args. is incorrect
 */

int main(int argc, char *argv[])
{
	char s;
	int a = 0;
	int b = 0;
	int output = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	output = (get_op_func(argv[2]))(a, b);
	printf("%d\n", output);
	return (0);
}

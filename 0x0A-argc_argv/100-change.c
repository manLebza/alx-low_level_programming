#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints coins remaining
 * @argv: 1 number arg.
 * @args: parameter entry
 * Return: 0 on one number of args
 */

int main(int args, char *argv[])
{
	int a, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; a >= 0;)
	{
		if (a >= 25)
			a -= 25;

		else if (a >= 10)
			a -= 10;

		else if (a >= 5)
			a -= 5;

		else if (a >= 2)
			a -= 2;

		else if (a >= 1)
			a -= 1;

		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

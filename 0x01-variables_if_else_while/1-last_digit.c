#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -> entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() * RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	if (n > 5)
	{
		printf("greater than s");
	}
	if (n == 0)
	{
		printf("0");
	}
	if (n < 6 &&  n != 0)
	{
		printf("Less than 6 not 0");
	}
	return (0);
}

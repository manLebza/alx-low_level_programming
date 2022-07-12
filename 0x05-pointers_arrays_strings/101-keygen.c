#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> generates a random password that shoud be valid
 * Return: 0 (On Success).
 *
 */

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}

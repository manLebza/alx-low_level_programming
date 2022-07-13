#include <stdio.h>

/**
 * main -> entry point
 * Return: Always return 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'a')
		{
			continue;
		}
	putchar (a);
	return (0);
	}
}

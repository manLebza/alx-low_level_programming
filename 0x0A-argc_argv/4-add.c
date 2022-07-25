#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main -> entry point
* @argc: is arg.
* @argv: is arg array.
* Return: an int will be returned.
*/

int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			int z;
			char *str;

			str = argv[x];
			for (z = 0; str[z] != '\0'; z++)
			{
				if (str[z] < 48 || str[z] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (x = 1; x < argc; x++)
	{
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

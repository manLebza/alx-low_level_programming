#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -> allocates second array
 * @width: width of array
 * @height: height of array
 * Return: A pointer to allocated grind
 */

int **alloc_grid(int width, int height)
{
	int a, b, c;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);

	else
	{
		z = (int **)malloc(height * sizeof(int *));

		if (z == NULL)
		{
			free(z);
			return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			z[a] = (int *)malloc(width * sizeof(int));
			if (z[a] == NULL)
			{
				for (c = a; c > 0; c--)
					free(z[c]);
				free(z);
				return (NULL);
			}
		}
		for (b = 0; b < height; b++)
		{
			for (c = 0; c < width; c++)
				z[b][c] = 0;

		}
		return (z);
	}
}

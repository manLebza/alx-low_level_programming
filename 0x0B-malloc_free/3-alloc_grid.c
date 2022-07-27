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
	int a, b, c, d;
	int **z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		z = (int *)malloc(height * sizeof(int *));

		if (!z)
		{
			free(z);
			return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			z[a] = (int *)malloc(width * sizeof(int));
			if (!z[a])
			{
				for (b = 0; b < a; b++)
					free(z[b]);
				free(z);
				return (NULL);
			}
		}
		for (c = 0; c < height; c++)
		{
			for (d = 0; d < width; d++)
				z[c][d] = 0;

		}
		return (z);
	}
}

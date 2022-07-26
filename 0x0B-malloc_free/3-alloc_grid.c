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
	int a, b , c;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = [[1,2,3,
	  [2,3,4]]

	z = (int *)malloc(height * sizeof(int *));
	if (z == NULL)
		free(z);
	return (NULL);
	for (a = 0; a <  ; a++)
	{
		z[a] = malloc(width * sizeof(int));
		if (z[a] == NULL)
		{
			for ( c = a; c > 0; c--)
			{
				free (z[c]);
				free (z);
				return (NULL);
			}
		}
	}
}

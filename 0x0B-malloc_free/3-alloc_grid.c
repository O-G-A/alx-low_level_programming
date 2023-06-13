#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: pointer to two dim. array
 */
int **alloc_grid(int width, int height)
{
	int **M;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	M = malloc(sizeof(int *) * height);
	if (M == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		M[a] = malloc(sizeof(int) * width);

		if (M[a] == NULL)
		{
			for (; a >= 0; a--)
				free(M[a]);

			free(M);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			M[a][b] = 0;
	}
	return (M);
}

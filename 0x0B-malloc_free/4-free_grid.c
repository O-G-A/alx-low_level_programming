#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two dimensional array
 * @grid: the two dimensional grid
 * @height: the height the dimension of grid
 * Description: deallocates the  memory of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 *  free_grid - a function that frees a two
 *  dimensional grid
 *  @grid: grid to be freed
 *  @height: height of the 2D array
 *  Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

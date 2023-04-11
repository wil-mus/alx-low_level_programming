#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free 2D grid
 *
 * @grid: 2D array to be freed
 * @height: heighy of 2D array
 *
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

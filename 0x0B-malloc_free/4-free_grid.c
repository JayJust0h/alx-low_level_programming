#include "main.h"

/**
 * free_grid - free 2-d grid.
 * @grid: multidimensional array of integers.
 * @height: height of grid.
 * Return: 0 (success).
 */

void free_grid(int **grid, int height)

{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}

}


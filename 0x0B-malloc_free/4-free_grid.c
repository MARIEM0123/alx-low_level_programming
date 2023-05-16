#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory
 * @grid: the grid
 * @height: height dimension
 * Return:No return
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


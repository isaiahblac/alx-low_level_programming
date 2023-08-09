#include "main.h"

/**
 * free_grid - frees 2 dimensional array
 * @grid: the 2d array
 * @height: rows of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		return;
	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

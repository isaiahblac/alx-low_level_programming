#include "main.h"

/**
 * alloc_grid - returns a pointer to 2 dimensional array of int
 * @width: columns
 * @height: rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (k = 0 ; k < height ; k++)
			free(grid[k]);
		return (NULL);
		}
	for (k = 0 ; k < width ; k++)
		grid[i][k] = 0;
	}
	return (grid);
}

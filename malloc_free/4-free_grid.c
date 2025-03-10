#include "main.h"
#include "stdlib.h"

/**
 * free_grid - free 2D array of integers
 * @grid: the 2D array to free
 * @height: number of rows
 *
 * Return: nothing (void)
 */

void free_grid(int **grid, int height)
{
	int i;

	/* if grid is NULL, then nothing to free */
	if (grid == NULL)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Then, free array of row pointers */
	free(grid);
}







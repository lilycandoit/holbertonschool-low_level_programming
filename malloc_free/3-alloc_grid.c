#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a 2 dimensional array of integers
 * or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* check invalid input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for the row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* free previously allocated rows before returning NULL*/
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			/* free(grid) */
			/* free the row pointer itself */
			return (NULL);
		}

		/* Initialize ALL elements to 0 */
		for (j = 0; j < width; j++ )
			grid[i][j] = 0;
	}


	return (grid);
}



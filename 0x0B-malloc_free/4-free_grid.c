#include<stdlib.h>

/**
 *free_grid - frees allocated 2d memory
 *@grid: the 2d array
 * @height: the height of the array
 *Description: frees grid's memory
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}

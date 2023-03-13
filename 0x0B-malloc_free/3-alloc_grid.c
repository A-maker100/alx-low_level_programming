#include<string.h>
#include<stdlib.h>
/**
 *alloc_grid-creates and initializes a 2d array
 * @height: number of rows
 * @width: number of columns
 *Description: creates a 2d array and initialises the grid with 0
 *Return: the allocated array
 */

int **alloc_grid(int height, int width)
{
	int R_ind, C_ind, ind;

	int **ARRAY;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ARRAY = (int **)malloc(height * sizeof(int));
	if (ARRAY == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < height; ind++)
	{
		ARRAY[ind] = (int *)malloc(width * sizeof(int));
		if (ARRAY[ind] == NULL)
		{
			return (NULL);
		}
	}
	/* grid ARRAY has been set up successfully */
	for (R_ind = 0; R_ind < height; R_ind++)
	{
		for (C_ind = 0; C_ind < width; C_ind++)
		{
			ARRAY[R_ind][C_ind] = 0;
		}
	}
	return (ARRAY);
}

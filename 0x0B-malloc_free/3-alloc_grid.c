#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 *alloc_grid-creates and initializes a 2d array
 * @width: number of rows
 * @height: number of columns
 *Description: creates a 2d array and initialises the grid with 0
 *Return: the allocated array
 */

int **alloc_grid(int width, int height)
{
	int C_ind, ind;
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
		/* Initialise the array */
		for (C_ind = 0; C_ind < width; C_ind++)
		{
			ARRAY[ind][C_ind] = 0;
		}
	}
	return (ARRAY);
}

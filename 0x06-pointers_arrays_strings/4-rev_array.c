/**
 * reverse_array- Only function in here. reverses the order of array contents
 * @a : the array, first parameter
 * @n : the size of the array, second parameter
 * Description: This function reverses the order of array elements
 * Return: void;
 */
#include<stdio.h>
#include<stdlib.h>
void reverse_array(int *a, int n)
{
	int *reversed_array = malloc(sizeof(int) * n);
	int r_index, forward_index;
	/* copy the array in reverse */
	for (r_index = n - 1, forward_index = 0; r_index >= 0; r_index--)
	{
		reversed_array[forward_index] = a[r_index];
		forward_index++;
	}
/* Update the old array */
	for (forward_index = 0; forward_index < n; forward_index++)
	{
		a[forward_index] = reversed_array[forward_index];
	}
	free(reversed_array);
}

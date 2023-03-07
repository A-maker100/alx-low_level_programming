#include<stdlib.h>
#include<stdio.h>
/**
 * print_diagsums-Major function in this program
 * @a: array
 * @size: number of cols and rows
 * Description: prints sums of diagonals
 * Return: void, nothing
 */
void print_diagsums(int *a, int size)
{
	int i, length;
	int Forward_sum, Reverse_sum;

	length = size;
	Forward_sum = 0;
	Reverse_sum = 0;

	for (i = 0; i < length; i += (size + 1))
	{
		Forward_sum += a[i];
	}

	for (i = length - size; i >= 0; i -= (size - 1))
	{
		Reverse_sum += a[i];
	}

	/* convert the numbers to strings in order to use _putchar */
	printf("%i, %i\n", Forward_sum, Reverse_sum);
}

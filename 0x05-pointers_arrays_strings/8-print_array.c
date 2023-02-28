/**
 * print_array- Major function in the program
 * @a : first parameter
 * @n : second parameter
 * Description: prints first n elements in a
 * Return: 0
 */
#include<stdio.h>
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter == (n - 1))
		{
			putchar((a[counter] - '0'));
			putchar(10);
		}
		else
		{
			putchar((a[counter] - '0'));
			putchar(44);
			putchar(32);
		}
	}
}

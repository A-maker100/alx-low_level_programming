#include<stdio.h>
/**
 * is_sqrt- Helper function
 * @N : Number to find sqrt for
 * @index : counter for finding square root
 * Description: uses recursion to find square root of N
 * Return: sqrt if found or -1
 */
int is_sqrt(int N, int index)
{
	if (index * index == N)
	{
		return (index);
	}

	else if (index == N)
	{
		return (-1);
	}

	return (is_sqrt(N, ++index));
}

/**
 * _sqrt_recursion- Major function in the program
 * @n: integer parameter
 * Description: Function returns sqrt of n
 * Return: -1 if sqrt is NaN or official sqrt
 */
int _sqrt_recursion(int n)
{
	int IND = 1;

	if (n < 0)
	{
		return (-1);
	}
	return (is_sqrt(n, IND));
}

/**
 * factorial- Major function in this program
 * @n: number input
 * Description: program finds factorial of a number
 * Return: integer result
 */
#include<stdio.h>
#include<stdlib.h>

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} /* Error handling */
	if (n == 0)
	{
		return (1);
	}

	else if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

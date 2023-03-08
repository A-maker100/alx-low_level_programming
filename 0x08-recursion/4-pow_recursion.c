/**
 * powers - helper function in this program
 * @S: base; first parameter
 * @F: exponent; second parameter
 * Description: raises S to the power of F
 * Return: an integer result
 */

int powers(int S, int F)
{
	if (F == 0)
	{
		return (1);
	}

	return (S * powers(S, --F));
}

/**
 * _pow_recursion- Major function in program
 * @x: base; first parameter
 * @y: exponent; second parameter
 * Description: raise x to the power of y
 * Return: integer result
 */
#include<stdio.h>
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (powers(x, y));
}

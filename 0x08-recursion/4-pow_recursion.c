/**
 * _pow_recursion- Major function in program
 * @x: base; first parameter
 * @y: exponent; second parameter
 * Description: raise x to the power of y
 * Return: integer result
 */
#include<stdio.h>
#include<math.h>

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, --y));
}

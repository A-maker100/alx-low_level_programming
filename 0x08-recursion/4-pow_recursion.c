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
	return(pow((double)x, (double)y));
}

int main(void)
{
	int X = 10, Y = 2, RES;

	RES = _pow_recursion(X, Y);
	printf("%d\n", RES);
	return RES;
}

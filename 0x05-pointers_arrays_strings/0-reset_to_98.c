#include<stdio.h>

/**
 * reset_to_98 - Additional function in the program
 * @n : the function takes n as a parameter
 * Description : resets the value in n to 98
 * Return: no return value; void
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Major function of the program
 * @void : main function takes no parameters
 * Description : The function will call another one to reset things to zero
 * Return: Always returns 0 at the end of function
 */

int main(void)
{
	int number;
	int *p;

	number = 420;
	p = &number;
	reset_to_98(p);
	return (0);
}

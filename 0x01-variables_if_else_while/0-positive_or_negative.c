#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Major function in this program
 * @void - the main function takes no parameters
 * Description: check if a random number is negative,positive or equal zero
 * Return: returns 0 when program ends
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

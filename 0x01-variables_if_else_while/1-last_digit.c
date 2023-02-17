#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Major function in this program
 * @void : main function takes no parameters
 * Description: checks the last digit of random number n generated
 * Return: returns 0 when program ends
 */

int main(void)
{
	int n;
	int length;
	int last_digit;
	char *string_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Turn the number to a string */
	length = snprintf(NULL, 0, "%d", n);
	string_n = malloc(length + 1);

	snprintf(string_n, length + 1, "%d", n);
	last_digit = string_n[length - 1] - 48;

	if (n < 0)
	{
		last_digit = last_digit - 2 * last_digit;
	}
	free(string_n);
	/* Print output */

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

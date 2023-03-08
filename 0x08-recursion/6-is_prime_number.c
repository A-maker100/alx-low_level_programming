#include<stdbool.h>
/**
 *is_prime- Helper function in the program
 * @n: The original number
 * @index: the divisor
 * Description: recursive division function
 * Return: true if prime; false otherwise
 */
bool is_prime(int n, int index)
{
	if (index == n)
	{
		return (true);
	}

	else if (n % index == 0)
	{
		return (false);
	}

	return (is_prime(n, ++index));
}

/**
 * _is_prime_number - Major function in this program
 * @n: integer parameter
 * Description: determines if a number is prime number or not
 * Return: 0 if not, 1 if it is
 */

int _is_prime_number(int n)
{
	int IND;

	IND = 2;
	if (n == 1 || n == 0)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	if (is_prime(n, IND))
	{
		return (1);
	}
	return (0);
}

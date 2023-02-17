#include<stdio.h>
/**
 * main - Major function in this program
 * @void: this function takes no parameters
 * Description: prints numbers in the base 16 notation
 * Return: returns 0 at end of function
 */

int main(void)
{
	char c;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar(10);

	return (0);
}

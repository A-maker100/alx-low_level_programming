#include<stdio.h>
/**
 * main - Major function in the program
 * @void: this function takes no parameters
 * Description: prints combinations of 0-9
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
		{
			putchar(n);
		}
		else
		{
			putchar(n);
			putchar(44);
		}
	}

	putchar(10);

	return (0);
}

#include<stdio.h>
/**
 * main - Major function in the program
 * @void: this function takes no parameters
 * Description: print numbers 0-9
 * Return: returns 0 on success
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}

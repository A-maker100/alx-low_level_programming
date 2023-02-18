#include<stdio.h>
/**
 * main - Major function in the program
 * @void: the function takes no parameters
 * Description: prints 0-9
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

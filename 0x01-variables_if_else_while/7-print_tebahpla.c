#include<stdio.h>
/**
 * main - Major function in the program
 * @void: function takes now parameters
 * Description: prints alphabets in reverse
 * Return: returns 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}

#include<stdio.h>
/**
 * main - Major function in program
 * @void: this main function takes no parameters
 * Description: prints all lowercase letters of the alphabet except q&e
 * Return: returns 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
		}

		else
		{
			putchar(ch);
		}
	}
	putchar(10);

	return (0);
}

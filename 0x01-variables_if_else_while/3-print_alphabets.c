#include<stdio.h>
/**
 * main - Major function in this program
 * @void: this main function takes no parameters
 * Description: prints all alphabet in lowercase,UPPERCASE and a newline
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}

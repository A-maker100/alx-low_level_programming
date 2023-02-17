#include <stdio.h>
#include <stdlib.h>
/**
 * main - Major function in this program
 * @void : this function does not take any parameters
 * Description: this function prints out all letters in lowercase
 * Return: returns 0 when function ends
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}

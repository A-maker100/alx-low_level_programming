/**
 * print_rev-prints a string in reverse
 * @s : char pointer as string parameter
 * Description : this function returns a string in reverse
 * Return: 0
 */
#include<string.h>
#include<stdio.h>
void print_rev(char *s)
{
	int length;
	int index;

	length = strlen(s);

	for (index = length - 1 ; index >= 0; index--)
	{
		putchar(s[index]);
	}
	putchar(10);
}

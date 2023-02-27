/**
 * _puts- Major function in this program
 * @s : char pointer of a string
 * Description : this function will print a string to stdout
 * Return: 0
 */
#include<stdio.h>
#include<string.h>
void _puts(char *s)
{
	int index;

	index = 0;

	while (index != strlen(s))
	{
		putchar(s[index]);
		index++;
	}
}

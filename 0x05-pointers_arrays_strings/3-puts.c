/**
 * _puts- Major function in this program
 * @s : char pointer of a string
 * Description : this function will print a string to stdout
 * Return: 0
 */
#include<stdio.h>
void _puts(char *s)
{
	int index;

	index = 0;

	while(s[index] != '\0')
	{
		putchar(s[index]);
		index++;
	}
}

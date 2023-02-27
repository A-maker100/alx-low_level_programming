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
	int length;

	length = strlen(s);
	index = 0;


	for (index; index < length; index++)
	{
		putchar(s[index]);
	}
}

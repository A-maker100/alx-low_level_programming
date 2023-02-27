/**
 * _puts- Major function in this program
 * @s : char pointer as a string parameter
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
	for (index = 0; index < length; index++)
	{
		putchar(s[index]);
	}
}

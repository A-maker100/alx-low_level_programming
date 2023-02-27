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
	int length;

	length = strlen(s);
	
	for ( int index = 0; index < length; index++)
	{
		putchar(s[index]);
	}
}

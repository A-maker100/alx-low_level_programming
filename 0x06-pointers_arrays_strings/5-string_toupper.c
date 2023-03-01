/**
 * string_toupper- function in this program
 * @c : character to be made UPPERCASE
 * Description: the function will convert a character to uppercase
 * Return: uppercased character string
 */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
char *string_toupper(char *c)
{
	int length, index;

	length = strlen(c);
	for (index = 0; index < length; index++)
	{
		if (islower(c[index]))
		{
			c[index] = toupper(c[index]);
		}
	}
	return (c);
}

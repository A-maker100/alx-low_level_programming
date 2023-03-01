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
	int character, length, index;
	char *max;

	length = strlen(c);
	max = malloc(length);

	for (index = 0; index < length; index++)
	{
		character = c[index];
		/* Ensure that the character is lower case */
		if (character >= 97)
		{
			character -= 32;
		}
		max[index] = character;
	}

	return (max);
}

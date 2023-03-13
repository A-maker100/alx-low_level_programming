#include<string.h>
#include<stdio.h>
/**
 *_strdup- function in this program
 * @str: string literal as parameter
 *Description: duplicates a string and returns the pointer to the duplicate
 *Return: NULL or the string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	return (strdup(str));
}

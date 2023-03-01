/**
 * cap_string- capitalises all words in a string
 * @c: string of characters
 * Decription: capitalises all words letters in a character string
 * Return: char pointer string literal
 */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char *cap_string(char *c)
{
	int MARKS[13] = {32, 9, 10, 44, 59, 46, 33, 64, 34, 40, 41, 123, 125};
	int length, index, marks_index;
	int ch;

	length = strlen(c);
	c[0] = toupper(c[0]);
	for (index = 1; index < length; index++)
	{
		ch = c[index];
		for (marks_index = 0; marks_index < 13; marks_index++)
		{
			if (ch == MARKS[marks_index])
			{
				ch = c[++index];
				c[index] = toupper(c[index]);
			}
		}
	}
	return (c);
}

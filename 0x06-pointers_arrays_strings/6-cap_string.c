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
#include<stdbool.h>
char *cap_string(char *c)
{
	char MARKS[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int length, index, marks_index, ch;
	bool flag;

	length = strlen(c);
	/* Ensure the first character is a letter or number */
	if (isalpha(c[0]))
	{
		c[0] = toupper(c[0]);
		flag = true;
	}

	for (index = 1; index < length; index++)
	{
		ch = c[index];
		for (marks_index = 0; marks_index < 13; marks_index++)
		{
			while (!isalnum(ch) && ch == MARKS[marks_index])
			{
				flag = true;
				ch = c[++index];
				if (isalnum(ch))
				{
					flag = false;
				}
				else
				{
					marks_index = 0;
				}
			}
		}
		if (flag == false && isalnum(ch))
		{
			c[index] = toupper(ch);
			flag = true;
		}
	}
	return (c);
}

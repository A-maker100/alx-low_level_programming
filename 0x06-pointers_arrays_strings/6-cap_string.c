/**
 * cap_string- capitalises all letters
 * @c: char pointer as a first parameter
 * Decription: capitalises all letters in a character string
 * Return: char pointer string literal
 */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char *cap_string(char *c)
{
	int length, index;
	char *MAX;

	length = strlen(c);
	MAX = malloc(length);

	for (index = 0; index < length; index++)
	{
		
		/* check for lower case characters and then convert only those to uppercase */
		
		if (islower(c[index]))
		{
			MAX[index] = toupper(c[index]);
		}
		else
		{	
			MAX[index] = c[index];
		}
	}

	return (MAX);
}

int main(void)
{
	char *s = "mgk";
	char *r;

	r = cap_string(s);

	printf("%s\n", r);

	return 0;
}

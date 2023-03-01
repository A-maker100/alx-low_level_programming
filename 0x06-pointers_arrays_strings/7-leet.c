/**
 * leet-function in this program
 * @c: character literal parameter
 * Description: encodes the string in 1337 format
 * Return: char* pointer literal
 */
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
char *leet(char *c)
{
	char L_L_KEY[5] = {'a', 'e', 'o', 't', 'l'};
	char U_L_KEY[5] = {'A', 'E', 'O', 'T', 'L'};
	int CHAR_ASCII[5] = {52, 51, 48, 55, 49};
	char *Leeted;
	int length, index, array_index;
	char s;

	length = strlen(c);
	Leeted = malloc(length);

	/* Start the search and replace thing yo have to implement */
	for (index = 0; index < length; index++)
	{
		Leeted[index] = c[index];
		s = c[index];

		/* check if they are identical to the corresponding values in that array */
		for (array_index = 0; array_index < 5; array_index++)
		{
			if (s == U_L_KEY[array_index] || s == L_L_KEY[array_index])
			{
				Leeted[index] = CHAR_ASCII[array_index];
			}
		}
	}
	return (Leeted);
}

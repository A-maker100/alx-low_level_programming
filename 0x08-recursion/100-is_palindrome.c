#include<string.h>
#include<stdbool.h>
#include<stdio.h>
/**
 * _palindrome_- Helper function for is_palindrome
 *@s: input string
 *@Ind: index to compare
 *Description: Checks if a particula is equal from both sides
 *Return: true if it is a palindrome else false.
 */
bool _palindrome_(char *s, int Ind)
{
	int LENGTH;

	LENGTH = strlen(s);
	if (Ind >= LENGTH)
	{
		return (true);
	}

	if (s[Ind] == s[LENGTH - (Ind + 1)])
	{
		return (_palindrome_(s, ++Ind));
	}

	return (false);
}

/**
 * is_palindrome- Major function in this program
 * @s: input string; only 1 parameter
 *Description: checks if a string is a palindrome or not
 *Return: 0 if not OR 1 if it is.
 */
int is_palindrome(char *s)
{
	int LENGTH, Start_Index;

	Start_Index = 0;

	LENGTH = strlen(s);
	if (LENGTH == 0)
	{
		return (1);
	}

	if (_palindrome_(s, Start_Index))
	{
		return (1);
	}
	return (0);
}

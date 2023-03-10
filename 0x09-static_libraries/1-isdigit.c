#include<ctype.h>
#include<stdio.h>
/**
 *_isdigit- Major function in this program
 * @c : integer input
 * Description: checks if the given input is for an integer or not
 * Return: 1 if it is a digit; 0 if it is not a digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

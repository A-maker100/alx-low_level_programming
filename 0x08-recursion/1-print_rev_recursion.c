#include<string.h>
#include<stdio.h>
/**
 * _rev_recursion-Function that prints a string
 * @s: original string, first parameter
 * @index: index of a char of a string
 * Description: prints a string in reverse using recursion
 * Return: void
 */
void _rev_recursion(char *s, int index)
{
	int INDEX, length;

	length = strlen(s);
	if (index == length)
	{
		return;
	}
	INDEX = index;
	_rev_recursion(s, ++index);
	putchar(s[INDEX]);
}
/**
 * _print_rev_recursion-Major function in this program
 * @s: parameter string to be reversed
 * Description: prints an input string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int IND;

	IND = 0;
	_rev_recursion(s, IND);
	putchar(10);
}

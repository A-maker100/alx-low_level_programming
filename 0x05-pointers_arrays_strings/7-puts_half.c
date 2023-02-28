/**
 * puts_half- Main function in the program
 * @str: string character pointer
 * Description: Function prints lowe half of string
 * Return: 0
 */
#include<stdio.h>
#include<string.h>
void puts_half(char *str)
{
	int index, half;
	long int length;

	length = strlen(str);
	if (length % 2 == 0)
	{
		/* Even */
		half = length / 2;
		for (index = half; index < length; index++)
		{
			putchar(str[index]);
		}
	}
	else
	{
		half = (length - 1) / 2;
		for (index = half + 1; index < length; index++)
		{
			putchar(str[index]);
		}
	}

	putchar(10);
}

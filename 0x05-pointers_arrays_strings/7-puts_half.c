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
	int index, length, half;

	length = strlen(str);
	half = length / 2;

	for (index = half; index < length; index++)
	{
		putchar(str[index]);
	}
}

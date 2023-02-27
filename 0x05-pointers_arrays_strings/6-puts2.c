/**
 * puts2- Major function that will be in this program
 * @str: character pointer that is a string
 * Description : prints every other character of a string
 * Return: 0
 */
#include<stdio.h>
#include<string.h>
void puts2(char *str)
{
	int length;
	int index;

	length = strlen(str);
	for (index =  0; index < length; index += 2)
	{
		putchar(str[index]);
	}
	putchar(10);
}

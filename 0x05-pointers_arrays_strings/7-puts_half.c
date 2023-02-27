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

	putchar(10);
}

int main(void)
{
	char *s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	puts_half(s);

	return (0);
}

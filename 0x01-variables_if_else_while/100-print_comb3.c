#include<stdio.h>
/**
 * main - Major function in the program
 * @void: this function takes no parameters
 * Description: displays all combinations
 * Return: returns 0
 */

int main(void)
{
	int counter, next;

	counter = 48;

	while (counter <= 57)
	{
		next = counter + 1;
		
		while (next <= 57)
		{
			putchar(counter);
			putchar(next);

			if( next == 57 && counter == 56)
			{
				break;
			}
			else if((next != 57 && counter != 57) || (next == 57 && counter != 57) || (next != 56 && counter != 57))
			{
				putchar(44);
				putchar(32);
			}
			next += 1;
		}

		counter += 1;
	}
	putchar(10);

	return (0);
}

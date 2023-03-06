/**
 * print_chessboard - Major function in the program
 * @a: 2d array in a different format I have no idea about
 * Description: prints out the entire cheesboard
 * Return: no return value
 */
#include<string.h>
#include<stdio.h>
void print_chessboard(char (*a)[8])
{
	int iR, iC;

	/* print index 0,1,6,7 */
	for (iR = 0; iR < 8; iR++)
	{
		for (iC = 0; iC < 8; iC++)
		{
			if (iR == 0)
			{
				putchar(a[0][iC]);
			}
			else if (iR == 1)
			{
				putchar(a[1][iC]);
			}
			else if (iR == 6)
			{
				putchar(a[6][iR]);
			}
			else if (iR == 7)
			{
				putchar(a[7][iC]);
			}
			else
			{
				putchar(32); /* prints space */
			}
		}
		putchar(10);
	}
}

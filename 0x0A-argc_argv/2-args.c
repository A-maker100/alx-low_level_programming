#include<stdio.h>
/**
 * main- major function
 * @argc: number of arguments in program run
 * @argv: array of arguments
 * Description: prints all arguments in command-line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ind;
	for (ind = 0;  ind < argc; ind++)
	{
		printf("%s\n", argv[ind]);
	}

	return (0);
}

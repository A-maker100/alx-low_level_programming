#include<stdio.h>
/**
 * main- main function in program
 * @argc: number of arguments in command line call
 * @argv: array of arguments in command line
 * Description: prints out the total number of CL arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int ind;

	ind = sizeof(*argv) / sizeof(argv[0]);
	if (argc == ind)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}

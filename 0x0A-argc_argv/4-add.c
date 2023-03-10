#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

/**
 * main- Major function in this program
 * @argc: total number of parameters in CL call
 * @argv: array of parameters from the CL call
 * Description: add all positive numbers from argv
 * Return: 0 or 1 on error;
 */

int main(int argc, char *argv[])
{
	int ind, sum, num;

	sum  = 0;
	/* No argz passed in */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (ind = 1; ind < argc; ind++)
	{
		if (!isdigit(*argv[ind]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (ind = 1; ind < argc; ind++)
	{
		num = atoi(argv[ind]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%i\n", sum);
	return (0);
}

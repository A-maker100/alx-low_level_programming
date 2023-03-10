#include<stdio.h>
#include<stdlib.h>
/**
 *main- main function in program
 * @argc: number of arguments provided in CL command
 * @argv: array of arguments provided
 * Description: multiplies the parameters received
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int para1, para2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	para1 = atoi(argv[1]);
	para2 = atoi(argv[2]);
	product = para1 * para2;

	printf("%i\n", product);

	return (0);
}

#include<stdio.h>
/**
 * main-main function
 * @argc: counts number of arguments when program is being run
 * @argv: an array of CL args when program is being run
 * Description: uses argv to print out program name
 * Return: 0 for success and 1 for errors
 */
int main(int argc, char *argv[])
{
	char *program_name;

	program_name = argv[argc - 1];
	/* program name will always be index 0 */
	printf("%s\n", program_name);
	return (0);
}

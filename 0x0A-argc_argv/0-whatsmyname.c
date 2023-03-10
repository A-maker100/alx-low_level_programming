/#include<stdio.h>
/**
 * main-main function
 * @argc: counts number of arguments when program is being run
 * @argv: an array of CL args when program is being run
 * Description: uses argv to print out program name
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *program_name;

	program_name = argv[0];
	/* program name will always be index 0 */
	printf("%s\n", program_name);
	return (0);
}

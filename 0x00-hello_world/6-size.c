#include<stdio.h>

/**
 * main - Major function in this program
 * @void : main does not take any variables
 * Description : This main program prints the sizes of bytes of each data type
 * Return : returns 0 at end of the main function
 */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}

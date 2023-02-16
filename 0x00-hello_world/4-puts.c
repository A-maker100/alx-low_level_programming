#include<stdio.h>
#include<unistd.h>
/**
 * main - Major function in this program
 * @void - main function does not take parameters
 * Description- the program prints output to the screen
 * Return: returns 0 at the end of program
 */

int main(void)
{
write(1, "Programming is like building a multilingual puzzle", 44);
printf("\n");
return (0);
}

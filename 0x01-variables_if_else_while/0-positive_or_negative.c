#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Major function in this program
 * @void - the main function takes no parameters
 * Description: The program generates a random number and then determines whether it is neg, positive or equal to zero
 * Return : the main function returns zero when the program finishes
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	  printf("%d is negative\n", n);
	  }

	else if(n > 0){
	  printf("%d is positive\n", n);
	}

	else if( n == 0)
	  {
	    printf("%d is zero\n", n);
	  }
	return (0);
}

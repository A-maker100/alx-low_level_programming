#include<stdlib.h>
/**
 *create_array- function in this program
 *@size: size of array to be created
 *@c: character to fill the memory space in array
 *Description: creates an array of size and fills it with c
 *Return: starting address/ pointer of array
 */

char *create_array(unsigned int size, char c)
{
	char *cPtr;
	int index;

	if (size == 0)
	{
		return (NULL);
	}

	cPtr = malloc(size * sizeof(char));
	for (index = 0; index < size; index++)
	{
		cPtr[index] = c;
	}
	return (cPtr);
}

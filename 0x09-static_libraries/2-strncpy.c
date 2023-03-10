/**
 *_strncpy- Major function in the program
 * @dest: destination buffer, 1st parameter
 * @src: source buffer, 2nd parameter
 * @n: number of characters to copy from the src buffer
 * Description: This function copies n characters to dest
 * Return: final string as char pointer
 */
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

char *_strncpy(char *dest, char *src, int n)
{
	char *cPtr;

	cPtr = strncpy(dest, src, n);

	return (cPtr);
}

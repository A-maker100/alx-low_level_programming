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
	int length;
	char *FINAL;

	length = strlen(dest);
	FINAL = malloc(length);

	strncpy(FINAL, dest, strlen(dest));
	strncpy(FINAL, src, n);

	dest = FINAL;
	FINAL = NULL;
	return (dest);
}

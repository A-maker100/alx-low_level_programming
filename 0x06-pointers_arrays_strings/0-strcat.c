/**
 * _strcat-Major function in the program
 * @dest : character pointer as a destination string(the string we add to)
 * @src : the string we concatenate to the destination
 * Description : the function concatenates two strings
 * Return: char* the resulting string; dest variable altered.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *_strcat(char *dest, char *src)
{
	int length;
	char *FINAL;

	length = strlen(dest) + strlen(src) + 1;
	FINAL = malloc(length);
	strcat(FINAL, dest);
	strcat(FINAL, src);
	dest = FINAL;
	FINAL = NULL;
	return (dest);
}

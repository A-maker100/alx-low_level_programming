/**
 * _strncat-Major function in this program
 * @dest: the character string will we be concatenating to
 * @src: the string we will be taking values from
 * @n: number of bytes to take from src
 * Description: concatenates a limited number of characters
 * Return: concatenated string
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *_strncat(char *dest, char *src, int n)
{
	int length;
	char *FINAL;

	length = strlen(dest) + n;

	FINAL = malloc(length);
	strcat(FINAL, dest);
	strncat(FINAL, src, n);
	dest = FINAL;
	FINAL = NULL;
	return (dest);
}

/**
 * _strncat-Major function in this program
 * @dest: the string will we be concatenating to. assume it has space
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
	char *cPtr;

	cPtr = strncat(dest, src, n);

	return (cPtr);
}

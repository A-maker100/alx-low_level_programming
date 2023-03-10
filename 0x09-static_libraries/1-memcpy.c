/**
 * _memcpy-Major function in this program
 * @dest: memory space to copy to.
 * @src: memory space to copy from.
 * @n: number of bytes to copy.
 * Description: this function copies n bytes from src to dest
 * Return: returns dest after it has been copied to.
 */
#include<string.h>
#include<stdio.h>
char *_memcpy(char *dest, char *src, int n)
{
	return (memcpy(dest, src, n));
}

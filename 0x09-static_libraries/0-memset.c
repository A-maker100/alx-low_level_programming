/**
 * _memset-major function in this program
 * @s : memory area needing to be filled
 * @b : constant byte used to fill the memory area, s
 * @n : first n bytes to be filled by b in s
 * Description : fills first n bytes of s with b
 * Return: returns s after the filling
 */

#include<string.h>
#include<stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

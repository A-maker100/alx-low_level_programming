/**
 * _strspn- Major function in this program
 * @s: string to search in
 * @accept: string to look for
 * Description: it's the no. of characters that have any char in accept
 * Return: number of bytes in s which consists only of bytes from accept
 */
#include<string.h>

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

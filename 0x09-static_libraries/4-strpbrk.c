/**
 * _strpbrk - Major function in this program
 * @s: string to look inside
 * @accept: string of characters to look for
 * Description: search for any char in accept in s
 * Return: returns a substring from the first cut part
 */

#include<string.h>
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

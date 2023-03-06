/**
 * _strchr-Major function in the program
 * @s : character string to search inside
 * @c : character to search for
 * Description: searchs for c inside s
 * Return: c in s if c is in s or NULL if c is not in s.
 */
#include<string.h>
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

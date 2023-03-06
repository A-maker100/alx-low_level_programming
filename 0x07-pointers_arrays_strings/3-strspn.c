/**
 * _strspn- Major function in this program
 * @s: string to search in
 * @accept: string to look for
 * Description: it's the no. of characters that have any char in accept
 * Return: number of bytes in s which consists only of bytes from accept
 */
#include<string.h>
#include<stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

int main(void)
{
	char p[] = "Sisuka kude joe, asipheli";
	char s[] = "Skill konquers just about-anything";
	unsigned int length;

	length = _strspn(p, s);

	printf("%u\n", length);

	return 1;
}

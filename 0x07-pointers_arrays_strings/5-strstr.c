/**
 *_strstr- Major function in this program
 *@haystack: first parameter, string to search inside
 *@needle: substring to search for, 2nd parameter
 *Description: Locates a substring and prints it
 *Return: the remainder of the string from the found substring
 */
#include<string.h>
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

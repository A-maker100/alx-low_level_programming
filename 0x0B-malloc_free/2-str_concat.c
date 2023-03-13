#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 *str_concat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * Description: this function concatenates two strings
 * Return: null or concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int length, ind, s1_length, s2_length;
	char *str;

	s1_length = strlen(s1);
	s2_length = 0;
	length = strlen(s1) + strlen(s2);
	str = (char *)malloc(length);
	if (str == NULL)
	{
		return (NULL);
	}

	for (ind = 0; ind < s1_length; ind++)
	{
		str[ind] = s1[ind];
	}
	for (ind = s1_length; ind < length; ind++)
	{
		str[ind] = s2[s2_length++];
	}

	return (str);
}

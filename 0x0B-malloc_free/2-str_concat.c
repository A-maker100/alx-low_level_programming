#include<string.h>
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
	int length, ind, s1_length, s2_length, length_2;
	char *str;

	if (s1 == NULL)
	{
		s1_length = 0;
	}
	else
	{
		s1_length = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2_length = 0;
	}
	else
	{
		s2_length = strlen(s2);
	}
	if (s1 == NULL && s2 == NULL)
	{
		s1_length = 0;
		s2_length = 0;
	}
	length_2 = 0;
	length = s1_length + s2_length;
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
		str[ind] = s2[length_2++];
	}
	return (str);
}

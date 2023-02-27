/**
 * rev_string- main function in this program
 * @s : char pointer as a parameter string
 * Description : this function reverses a string but it does not print it
 * Return: always 0
 */
#include<stdio.h>
#include<string.h>
void rev_string(char *s)
{
	int length;
	int c;
	char temp;
	
	length = strlen(s);
	for (c = 0; c < length; c++)
	{
		temp = s[c];
		s[c] = s[length - (c + 1)];
		s[length - (c + 1)] = temp;
	}

}

int main(void)
{
	char t[] = "welcome to my world";
	rev_string(t);
	printf("%s\n", t);

	return (0);
}

#include<ctype.h>
/**
 *_isupper- Major function in the program
 *@c: ASCII value of input char
 * Description: checks if c is uppercase or not
 * Return: 0 if not uppercase; 1 if uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}

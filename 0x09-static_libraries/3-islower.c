#include<ctype.h>
/**
 *_islower-Major function in this program
 * @c : ASCII value
 * Description: determines if c is lower case or not
 * Return: 1 if it is lower case or 0 if it is not
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}

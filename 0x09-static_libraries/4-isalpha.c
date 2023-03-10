#include<ctype.h>
/**
 *_isalpha-FUNCTION in file
 * @c: ASCII that is to be determined
 * Description: determines if a value is alphabet or not
 * Return: 1 if alphabet, 0 if not alphabet
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}

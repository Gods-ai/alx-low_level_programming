#include "main.h"

/**
 * _isupper - checks the input for upper case character
 * @c: main parameter were looking for
 *
 * Return: int type so were returing 0
 */

int _isupper(int c)
{
	/** checks for c character type through A-Z */
	if (c >= 'A' && c <= 'Z')
	{
		/** if c is upper case return 1 */
		return (1);
	}

	else
		/* if its not return 0 */
		return (0);
}

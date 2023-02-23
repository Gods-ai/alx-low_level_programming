#include "main.h"

/**
 * _isalpha - checks for alphabetic characters in the code
 * @c: checks is c is an alphabetic character
 *
 * Return: Will return 1 if the value is true
 */

int _isalpha(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}

	else
		return (0);
}

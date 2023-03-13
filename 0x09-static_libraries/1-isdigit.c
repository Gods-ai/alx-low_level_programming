#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: check if c is a digit
 *
 * Return: int type will return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

	return (0);
}

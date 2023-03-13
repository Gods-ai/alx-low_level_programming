#include "main.h"

/**
 * _islower - _islower function is used with int c
 *@c: receives unsigned int
 *
 * Return: Always 0 since we're using int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
		return (0);
}

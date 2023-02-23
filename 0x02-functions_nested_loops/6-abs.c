#include "main.h"

/**
 * _abs - computes the value of an integer
 *@ab: this is the integer input
 * receives int as a value
 *
 * Return: Always 0
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

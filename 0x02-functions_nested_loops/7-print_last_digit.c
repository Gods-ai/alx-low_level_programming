#include "main.h"

/**
 * print_last_digit - this will always print the last digits of a number
 *@num: takes the inter num
 * Return: Always 0
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = (num % 10);

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

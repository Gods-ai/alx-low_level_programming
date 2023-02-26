#include "main.h"
/**
 * print_line - this function draws a straight line
 * @n: takes number of time to print
 *
 * Return: None since were void
 */

void print_line(int n)
{
	int lne;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (lne = 1; lne <= n; lne++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

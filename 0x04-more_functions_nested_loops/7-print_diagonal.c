#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: accepts the value as the variable
 *
 * Return: none we still remain void
 */

void print_diagonal(int n)
{
	int lin, len;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (lin = 1; lin <= n; lin++)
		{
			for (len = 1; len < lin; len++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

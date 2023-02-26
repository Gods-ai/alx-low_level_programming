#include "main.h"

/**
 * print_square - print # squares
 * @size: takes input for length and width
 *
 * Return: none we remain void
 */

void print_square(int size)
{
	int sq, len;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (sq = 1; sq <= size; sq++)
		{

			_putchar('#');


			for (len = 2; len <= size; len++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

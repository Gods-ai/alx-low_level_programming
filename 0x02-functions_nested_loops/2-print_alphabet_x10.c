#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet prints the lower alphabet x10
 *
 *
 * Return: Since our return is void, we won't be returning anything
 */

void print_alphabet_x10(void)
{
	int lower;
	int jg;

	jg = 0;

	while (jg < 10)
	{

		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		jg++;
		_putchar('\n');
	}
}

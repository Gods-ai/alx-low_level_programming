#include "main.h"

/**
 * print_alphabet - print_alphabet using _putchar
 *
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char low_alphabet;

	for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
	{
		_putchar(low_alphabet);
	}

	_putchar('\n');
}

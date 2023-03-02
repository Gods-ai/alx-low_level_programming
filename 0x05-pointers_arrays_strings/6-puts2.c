#include "main.h"

/**
 * puts2 - function to print only one character out of two
 * @str: input
 * Beginning with the first character
 * Return: void
 */

void puts2(char *str)
{
	int f = 0;

	for (; str[f] != '\0'; f++)
	{
		if ((f % 2) == 0)
			_putchar(str[f]);
		else
			continue;
	}
	_putchar('\n');
}

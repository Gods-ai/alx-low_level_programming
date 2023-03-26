#include "main.h"

/**
 * _puts_recursion - function to print a string
 * @s: the parameter thst is passed to the function
 *
 * Return: Nothing since were void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

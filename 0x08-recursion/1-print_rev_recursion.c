#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse form
 * @s: the argument to pass the parameter
 *
 * Return: Always 0 since we're void
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}



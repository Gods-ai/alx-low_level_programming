#include "main.h"
/**
 * main - main function
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

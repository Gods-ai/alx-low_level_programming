#include "main.h"

/**
 * more_numbers - prints 10 times the number 0-14
 *
 * Result: None since were void
 */

void more_numbers(void)
{
	/* assigning values to variables*/
	int num1, num2;

	/* declarations of the variables*/
	for (num1 = 0; num1 <= 9; num1++)
	{
		/* declaration goes for the value to be printed*/
		for (num2 = 0; num2 <= 14; num2++)

		{
			if (num2 > 9)
				_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}

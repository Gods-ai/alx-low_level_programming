#include "main.h"

/**
 * times_tables - prints the times table
 * Here we will need to specify roll,column and digit of current result
 * rope = roll, cone = column and dgit = digits
 *
 * Return: times tables
 */

void times_table(void)
{
	/** variables to be used */
	int roll, column, dgit;

	/** Assigning values to roll variable */
	/** roll =0, if 0 is lesser or equal to 9 */

	for (roll = 0; roll <= 9; roll++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		/** Assigning values to column variable */
		/** column =1 if 1 is less or equal to 9 */

		for (column = 1; column <= 9; column++)
		{
			/** defining the variable of dgit */
			/** dgit = roll * column */
			dgit = (roll * column);

			/** if value of dgit divid by 10 is greater than 0*/
			if ((dgit / 10) > 0)
			{
				_putchar((dgit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dgit % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

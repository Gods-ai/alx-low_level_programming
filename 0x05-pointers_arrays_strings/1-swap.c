#include "main.h"

/**
 * swap_int - swaps the values of intergers
 * @a: assigns 98 to a variable a
 * @b: assigns 42 to the variable b
 *
 * Return: none since we remained void
 */

void swap_int(int *a, int *b)
{
	/* declaring thevariable type*/
	int n;

	n = *a;
	*a = *b;
	*b = n;



}

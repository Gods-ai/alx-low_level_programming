#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: takes the input for name
 * @f: the function that receives the name
 *
 * Return: nothing since we're void
 */

void print_name(char *name, void (*f)(char *))
{
	/**
	 * checks if name holds a char type value
	 */
	if (f != NULL)
	{
		(f) (name);
	}
}


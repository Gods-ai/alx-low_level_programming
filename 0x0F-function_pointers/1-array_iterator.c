#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array to take the parameter
 * @size: the size of the array
 * @action: the pointer to the function
 *
 * Return: nothing since we're void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = i;


	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

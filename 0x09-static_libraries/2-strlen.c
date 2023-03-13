#include "main.h"
#include <string.h>

/**
 * _strlen - functions to print the string length
 * @s: variable to store the string
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int num_count = 0;

	while (s[num_count])
		num_count++;

	return (num_count);
}

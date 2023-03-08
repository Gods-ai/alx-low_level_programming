#include "main.h"

/**
 * *_memset - a function thst fills the memory of the pointer with n
 * @*s: the pointer where the value will be stored
 * @b: representing the address to be stored
 * @n: the value to be stored
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

#include "main.h"

/**
 * _memcpy - copies memory bytes from src to memory area dest
 *
 * @dest: dest byte memory will be copied from n
 * @src: scr memory area to
 * @n: memory will be copied from here
 *
 * Return: will return a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

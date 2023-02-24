#include "main.h"

/**
 * print_times_table - function that prints the n times tablie
 *@n: represents the value of input
 *
 * Return: None since you we return void
 */

#include <stdio.h>

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return; 
	}

	for (int i = 0; i <= n; i++)
	{ 
        for (int j = 0; j <= n; j++)
	{
		printf("%d ", i * j);
	}
		printf("\n");
	}
}


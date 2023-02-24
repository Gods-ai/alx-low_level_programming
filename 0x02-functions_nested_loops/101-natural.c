#include <stdio.h>
/**
 * main - Receives inputs
 *
 * Result: Always 0 (success)
 */

int main(void)
{
	int sum, i;
	       	sum = 0;
	
	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))

			sum += i;
	}

	printf(sum + '0');
	return (0);
}



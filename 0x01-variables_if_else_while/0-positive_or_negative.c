#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - Entry point
 *
 *
 * Result: Always 0 (success)
 */

/* n takes a random no*/
int main(void)
{
	int n;
	/* n here takes a random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

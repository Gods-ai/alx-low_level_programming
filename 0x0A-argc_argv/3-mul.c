#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiples two numbers
 * @argc: checks for the number of arguments passed
 * @argv: checks for the value passed on the command - line
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	/** stating the condition for the program to be true*/
	if (argc > 1)
	{

		/**iterate 2tu each argument and mul the answer with the previous result*/
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
			/** atoi converts the string arrays in the argv to int argument*/
		}
	printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (1);
}

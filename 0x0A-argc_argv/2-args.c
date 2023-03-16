#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that prints all the arguments passsed to it
 * @argc: stors the number of arguments
 * @argv: stores the arguments pased to it
 *
 * Return: always 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - argv passes arguments and parametersto main
 * @argc: argument that counts the number of parameters to main
 * @argv: argument that stores the name given to main
 *
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}


	return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * main - entry point 
 * prints number 1-100 while 
 * prints fizz where theres multiple of three and 
 * buzz where there is multiple of 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num, tre, fve;

	for (num = 0; num < 100; num++)
	{
		printf(num + '0');

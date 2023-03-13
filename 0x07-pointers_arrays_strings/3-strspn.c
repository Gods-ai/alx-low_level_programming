#include "main.h"

/**
 * _strspn - a function that returns the length of the initial substring
 * @s: stores the return lenght here
 * @accept: the string to check for substring
 *
 * Return: returns the number of btyes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	/** declaring variables for the substring*/
	unsigned int i, j, co;
	
	co =0;


	/**to loop through to find unequal values*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != 34)
		{

			for (j = 0; *(accept + j) != '\0'; j++)
			{

				/** comparing each string var*/
				if (*(s + i) == *(accept))
					co++;

			}

		}

		else

			return (co);
	}
	return (co);

}

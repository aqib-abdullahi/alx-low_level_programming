#include "main.h"

/**
 * print_sign - checks the sign of an input
 * Description: Printing the sign of an inputted number
 * Return: 1 if n is greater than zero
 * 0 if n is zero. -1 if n is less than zero
 */

int print_sign(int n)
{


	if (n > 0)
	{
		printf("+ %i", n);
		return (1);
	}

	if (n == 0)
	{
		printf("0");
		return (0);
	}

	if (n < 0)
	{
		printf("-, %i", n);
		return (-1);
	}


}

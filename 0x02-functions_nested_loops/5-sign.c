#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks the sign of an input
 * Description: Printing the sign of an inputted number
 * Return: 1 if n is greater than zero
 * 0 if n is zero. -1 if n is less than zero
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		printf("+ %i", n);
		ret = 1;
	}

	if (n == 0)
	{
		printf("0");
		ret = 0;
	}

	if (n < 0)
	{
		printf("-, %i", n);
		ret = -1;
	}

	return (ret);


}

#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks the sign of an input
 * @n : An input character
 * Description: Printing the sign of an inputted number
 * Return: 1 if n is greater than zero
 * 0 if n is zero. -1 if n is less than zero
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}

	else
	{
		_putchar('-');
		ret = -1;
	}

	return (ret);


}

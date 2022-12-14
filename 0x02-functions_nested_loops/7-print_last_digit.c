#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Printing the last digit of a number
 * @r: Input number
 * Description: Printing the last digit of a number and
 * returning the value of the last digit
 * Return: Value of the last digit.
 */

int print_last_digit(int r)
{

	int lstdigit;

	if (r < 0)
	{
		lstdigit = -1 * (r % 10);
		return (lstdigit);
		_putchar(lstdigit);
		printf("%i", lstdigit);
	}
	else
	{
		lstdigit = r % 10;
		return (lstdigit);
	}


}

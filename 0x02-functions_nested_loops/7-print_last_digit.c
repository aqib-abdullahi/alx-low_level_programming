#include "main.h"

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

	lstdigit = o % 10;
	_putchar(lstdigit);
	return (lstdigit);


}

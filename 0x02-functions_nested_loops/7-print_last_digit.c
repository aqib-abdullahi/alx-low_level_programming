#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @o: Input number
 * Description: Printing the last digit of a number and
 * returning the value of the last digit
 * Return: Value of the last digit.
 */

int print_last_digit(int o);
{

	int lstdigit;

	lstdigit = o % 10;
	return (lstdigit);


}

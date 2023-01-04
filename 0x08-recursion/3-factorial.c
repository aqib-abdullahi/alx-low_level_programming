#include "main.h"

/**
 * factorial - a funtion that returns the
 * factorial of an input number
 * @n: input type
 * Return: -1 for error
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	
	i = n * factorial(n - 1);
	return (i);

}

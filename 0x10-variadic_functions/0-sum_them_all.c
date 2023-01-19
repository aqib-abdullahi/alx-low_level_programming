#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: Number of input integers
 * Return: sum of all its parameters or 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sp;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (n <= 0)
		return (0);
	va_start (sp, n);
	for (i = 0; i < n; i++)
		sum += va_arg (sp, unsigned int);
	va_end (sp);
	return (sum);
}

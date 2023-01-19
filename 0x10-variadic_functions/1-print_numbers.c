#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers given as
 * parameters followed by a new line
 * @seperator: character input to be used for
 * seperation
 * @n: number of optional arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list(pn);

	if (n > 0)
	{
		va_start(pn, n);
		while (i < n)
		{
			printf("%d", va_arg(pn, int));
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(pn);
	}
	printf("\n");
}

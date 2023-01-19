#include "variadic_functions.c"
#include <sttdlib.h>
#include <stdarg.h>

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

	if (n > 0)
	{
		va_start(args, n);
		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}

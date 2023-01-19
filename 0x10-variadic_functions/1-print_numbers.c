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
	va_list pn;
	unsigned int i;

	if (n > 0)
	{
		va_start(pn, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_args(pn, int));

			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);
		}
		va_end(pn);
	}
	printf("\n");
}

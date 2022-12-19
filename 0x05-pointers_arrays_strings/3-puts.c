#include "main.h"

/**
 * _puts - A function that prints to stdout
 * @str: char type character
 * Return:  0 always
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

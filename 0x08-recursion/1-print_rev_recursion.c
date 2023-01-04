#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - A funtion that
 * reverses a string
 * @s: input string to be reversed
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

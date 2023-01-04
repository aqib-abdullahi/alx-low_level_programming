#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints
 * a given string
 * @s: input string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

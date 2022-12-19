#include "main.h"
#include <stdio.h>
/**
 * print_rev - Printing charactera in reverse
 * @s: char type character
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (len)
	{
	putchar(s[--i]);
	}
	putchar('\n');
}

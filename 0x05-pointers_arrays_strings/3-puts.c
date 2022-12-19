#include "main.h"
#include <stdio.h>
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
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

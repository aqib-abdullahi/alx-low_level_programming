#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints second
 * half of a string
 * @str - string input
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++;)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

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
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		n = (i - 1) / 2;
	else
		n = (i + 1) / 2;
	for (i = n; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}

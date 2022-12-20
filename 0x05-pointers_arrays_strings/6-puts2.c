#include "main.h"
#include <stdio.h>

/**
 * puts2 -  A function that prints every
 * other character starting from the first
 * *str - string input
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;
	int len;


	i = 0;
	len = 0;

	while (str[i] != '\0')
		i++;
	i = i - 2;

	for (len = 0; len <= i; len = len + 2)
		putchar(str[i]);
	putchar('\n');

}

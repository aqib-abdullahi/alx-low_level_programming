#include "main.h"
#include <stdio.h>

/**
 * puts2 -  A function that prints every
 * other character starting from the first
 * @str - string input
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i/2 != 0)
			continue;
		else
			printf("%c", str[i]);
	i++;
	}

}

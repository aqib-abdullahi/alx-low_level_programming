#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function tha prints numbers
 * from 0 to 9 except 2 and 4
 * Description: Printing 0 to 9 except 2 and 4
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}

		putchar(i + '0');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that prints 10 times
 * the number 0 to 14
 * Description: Printing 0 to 14 ten times
 * Return: 0 always
 */

void more_numbers(void)
{
	int x;
	int i;

	x = 0;
	i = 0;

	while (x < 10)
	{
		for (i = 0; i < 15; i++)
		{
			putchar(i + '0');
		}
		x++;
		putchar('\n');
	}



}

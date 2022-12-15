#include "main.h"
#include <stdio.h>

/**
 * print_square - Function that prints a square
 * @size: int type number
 * Description: Printing a square using #
 * Return: 0 always
 */

void print_square(int size)
{
	int i;
	int x;

	i = 0;
	x = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
				putchar('#');
		putchar('\n');
		}
	}
	else
		putchar('\n');


}

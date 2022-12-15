#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Function to print a diagonal line
 * @n int type number
 * Description: Printing a diagonal line on the terminal
 * Return: 0 always
 */

void print_diagonal(int n)
{
	int i;
	int x;

	i = 0;
	x = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i ; x++)
				putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}



}

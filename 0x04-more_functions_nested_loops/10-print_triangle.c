#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Function that prints a triangle
 * @size: int type number
 * Description: Printing triangle using #
 * Return: 0 always
 */

void print_triangle(int size)
{
	int i;
	int x;
	int sp;

	i = 0;
	x = 0;
	sp = size - 1;


	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < sp)
					putchar(' ');
				else
					putchar('#');
			}
			sp--;
			putchar('\n');
		}
	
	}
	else
		putchar('\n');


}

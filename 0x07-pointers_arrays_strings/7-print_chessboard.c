#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prnts
 * the chessboard
 * @a: an array input
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}

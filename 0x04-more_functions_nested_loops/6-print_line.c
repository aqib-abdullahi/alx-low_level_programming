#include "main.h"
#include <stdio.h>

/**
 * print_line - Function that prints a line
 * @n: int type number
 * Description: Printing a line
 * Return: 0 always
 */

void print_line(int n)
{
	int result;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		result = '_' * 3;
		putchar(result + '0');
		putchar('\n');
	}


}

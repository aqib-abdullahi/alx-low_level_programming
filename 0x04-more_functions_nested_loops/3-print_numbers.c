#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print numbers from 0 to 9
 * Description: Printing numbers from 0 to 9 followed
 * by a new line.
 * Return: 0 always
 */

void print_numbers(void)
{
	int i = '0';

	for (; i < '10'; i++)
	{
		_putchar(i);
	}
	putchar('\n');

}

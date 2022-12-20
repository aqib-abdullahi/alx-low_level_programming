#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints a
 * specified number of array elements
 * @n: input integer
 * @a: input array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(", ");
	}
	putchar('\n');
}

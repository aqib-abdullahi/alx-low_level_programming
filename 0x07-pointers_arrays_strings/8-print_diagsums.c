#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - a function that prints
 * the sum of the two diagonals of a matrix
 * of integers
 * @a: array input
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);

}

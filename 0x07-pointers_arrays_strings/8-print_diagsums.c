#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - a function that prints
 * the sum of the two diagonals of a matrix
 * of integers
 * @a: array input
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size);
{
	int i;
	int j;
	int sum1;
	int sum2;
	int k;
	int l;

	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0;
	l = size;

	for (i = 0; i < size; i++, j++)
		sum1 += a[i][j];

	for (k = 0; (k < size) && (l >= 0); k++, l--)
		sum2 += a[k][l];
	printf("%d, %d\n", sum1, sum2);

}

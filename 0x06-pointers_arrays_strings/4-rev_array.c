#include "main.h"

/**
 * reverse_array -  function that reverses an array
 * @a: input array
 * @n: contents of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];								a[n] = aux;
	}
}

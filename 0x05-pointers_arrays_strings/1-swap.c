#include "main.h"

/**
 * swap_int - A function that swaps two integers
 * @a: int type number
 * @b: int type number
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

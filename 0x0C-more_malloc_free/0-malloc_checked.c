#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates
 * memory using malloc.
 * @b: memory assigning value
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL);
		exit (98);

	return (p);
}

#include "main.h"

/**
 * reset_to_98 - updating values a pointer
 * points to
 * @n: int
 * Description: A function that updates the value
 * a pointer points to
 * Return: 0 always
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	p = &n;
	*p = 98;
	
	return (0);



}

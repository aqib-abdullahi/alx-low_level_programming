#include "main.h"

/**
 * _pow_recursion - a function that
 * calculates the square of x and y
 * @x: input (power)
 * @y: input (base)
 * Return: -1 if y is lower thatn 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1);
}

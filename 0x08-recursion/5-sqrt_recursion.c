#include "main.h"

int find_sqr(int x, int num);
int _sqrt_recursion(int n);

/**
 * find_sqr - a function that finds
 * the square root
 * @x: value from int n
 * @num: possible root
 * Return: root of number
 */

int find_sqr(int x, int num)
{

	if ((num * num) == x)
		return (num);
	if (num == x / 2)
		return (-1);
	return (find_sqr(x, num + 1));
}

/**
 * _sqrt_recursion - a function that
 * returns the natural square root
 * @n: input type int
 * Return: -1 if n does not have a
 * natural square root
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqr(n, num));
}

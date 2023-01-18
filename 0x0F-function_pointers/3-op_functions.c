#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add two ints
 * @a: first integer
 * @b: Second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - suntract two ints
 * @a: first int
 * @b:Second int
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 * Return: Multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: Divivsion
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the modulus of two ints
 * @a: first int
 * @b:secod int
 * Return: remainder of division of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Eroor\n");
		exit(100);
	}
	return (a % b);
}

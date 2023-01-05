#include "main.h"

int divisible(int num, int res);

/**
 * divisible - a function that determines whether
 * an input num is divisible by a number or not
 * @num: int n from is_prime_number()
 * @res: division result
 * Return: 1 if num is divisible by 2 or 0 is num
 * mod res is false
 */

int divisible(int num, int res)
{
	if (res == num / 2)
		return (1);
	if (num % res == 0)
		return (0);
	return (divisible(num, res + 1));
}
/**
 * is_prime_number - a function that determines
 * whether an input number is a prime number o not
 * @n: input type int
 * Return: 1 if input is a prime otherwise 0
 */

int is_prime_number(int n)
{
	int res = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (divisible(n, res));
}

#include "main.h""

/**
 * _isdigit - function to check a digit
 * Description: A function that checks through digits 1-9
 * @c: int type
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}

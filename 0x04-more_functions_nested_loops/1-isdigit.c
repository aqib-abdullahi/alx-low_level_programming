#include "main.h""

/**
 * _isdigit - function to check a digit
 * Description: A function that checks through digits 1-9
 * @c: int type
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	int ret;
	int i;

	i = 0;
	ret = 0;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			ret = 1
		else
			ret = 0
	}
	return (ret);

}

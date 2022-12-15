#include "main.h"

/**
 * _isupper - Checks if c is uppercase or lowercase
 * c -character to be checked
 * ret - return value
 * Description: Checking if a character is uppercase or lowercase
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char i;
	int ret;

	ret = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			ret = 1;
		else
			ret = 0;
	}


	return (ret);


}

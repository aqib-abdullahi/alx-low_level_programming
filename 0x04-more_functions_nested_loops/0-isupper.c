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
	int ret;


	if ((c == 'A') && (c == 'Z'))
	{
		ret = 1;
	else
		ret = 0;


	return (ret);


}

#include "main.h"

/**
 * _isupper - Checks if c is uppercase or lowercase
 * c -character to be checked
 * Description: Checking if a character is uppercase or lowercase
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int ret;


	if ((c >= 'a') && (c <= 'z'))
	{
		ret = 0;
	}
	else 
		ret = 1;

	return (ret);


}

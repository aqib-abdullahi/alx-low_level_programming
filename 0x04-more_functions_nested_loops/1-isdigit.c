#include "main.h""

/**
 * _isdigit - function to check a digit
 * Description: A function that checks through digits 1-9
 * @c: int type
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{

	char i = '0';

	int isdigit = 0;

		for (; i <= '9'; i++)
		{
			if (i == c)
			{
				isdigit = 1;
				break;
			}
		}
		return (isdigit);

}

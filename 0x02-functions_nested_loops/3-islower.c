#include "main.h"

/**
 * _islower - check character
 *
 * @c: An Input character
 *
 * _islower - start point
 *
 * Description: Checking upper or lower case
 *
 * Return: 1 (Success) 
 */

int _islower(int c)
{

	char i;

	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		lower = 1;
	}

	return (lower);
}

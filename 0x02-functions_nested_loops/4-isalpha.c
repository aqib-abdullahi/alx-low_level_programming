#include "main.h"

/**
 * _isalpha - check ALX
 * @c: An input character
 *
 * Description: checking whether input is lower
 * or uppercase.
 * Reaturn: 1 or 0 in otherwise
 */

int _isalpha(int c)
{

	char Upper;

	char Lower;

	int isLetter = 1;


	for (Lower = 'a'; Lower <= 'z'; Lower++)
	{

		for (Upper = 'A'; Upper <= 'Z'; Upper++)
		{

			if (c == Lower || c == Upper)
				isLetter = 1;

		}
	
	}
	return (isLetter);

}

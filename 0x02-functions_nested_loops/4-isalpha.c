#include "main.h"

/**
 * _isalpha - check ALX
 * @c: An input character
 *
 * Description: checking whether input is lower
 * or uppercase.
 * Reaturn: Always 1 (success) if it is a letter 0 otherwise
 */

int _isalpha(int c)
{
	int Re;


	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		Re = '1';

	else
		Re = '0';


	return (Re);
}

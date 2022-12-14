#include "main.h"

/**
 * _isalpha - check ALX
 * @c: An input character
 *
 * Description: checking whether input is lower
 * or uppercase.
 * Reaturn: 1 if letter, lower or uppercase, 0 otherwise
 */

int _isalpha(int c)
{


	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);

	else
		return (0);

}

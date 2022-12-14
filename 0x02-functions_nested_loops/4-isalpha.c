#include "main.h"

/**
 *_isalpha - check character is an alphabet
 * @c: Typee int character
 * Description: checking whether input is lower
 * or uppercase.
 * Return: Re 1 (success) if it is a letter,
 * lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int Re;


	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		Re = 1;

	else
		Re = 0;


	return (Re);
}

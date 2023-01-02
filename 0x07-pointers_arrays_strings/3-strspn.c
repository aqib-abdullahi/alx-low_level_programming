#include "main.h"

/**
 * _strspn - a function that gets the
 * length of a prefix substring
 * @s: initial string to be considered
 * @accept: characters to be checked for
 * Return: Number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l;
	char *sr = s;
	char *ac = accept;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (sr[i] == ac[j])
				l++;
			else
				continue;
		}
	}
	return (l);
}

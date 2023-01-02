#include "main.h"

/**
 * _strchr - a function that locates a character
 * in a string
 * @*s: string to be considered
 * @c: character to be checked for
 */

char *_strchr(char *s, char c)
{
	char *sr = s;
	int i;
	int n;
	char value;

	n = 0;

	for (i = 0; i != '\0'; i++)
	{
		if (sr[i] == value)
			break;
		else
			return ('\0');
	}
	while (i != '\0')
	{
		sr[n] = sr[i];
	n++;
	i++;
	}
	return (sr);
}

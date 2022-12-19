#include "main.h"

/**
 * rev_string - Reversing a string
 * @s: char type character
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	char a;

	i = 0;

	while (s[i] != '\0')
		i++;
	while (i)
		a = s[--i];
}

#include "main.h"

/**
 * string_toupper - Function tha changes lowercase
 * to uppercase
 * @s: input string
 * Return: Pointer to converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')							*s -= 32;
		s++;
	}
	return (start);
}

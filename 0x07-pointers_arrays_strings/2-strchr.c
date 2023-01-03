#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character
 * in a string
 * *s: string to be considered of char type
 * @c: character to be checked for
 * Return: a pointer to the first occurrence of
 * the character or NULL if no character found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

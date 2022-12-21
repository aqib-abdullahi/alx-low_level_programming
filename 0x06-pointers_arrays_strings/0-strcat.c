#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest - Destination string
 * @src - source string
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *re = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (re);
}

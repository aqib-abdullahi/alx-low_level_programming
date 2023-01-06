#include "main.h"

/**
 * _strncat - Afunction that concatenates two strings
 * @dest - an input string
 * @src - an input string
 * @n - an input type integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;
	char *de = dest;
	char *sr = src;

	while (*src)
	{
		len++;
		src++;
	}
	while (*dest)
	{
		dest++;
	}
	if (n > len)
		n = len;

	src = sr;

	for (i = 0; i < n; i++)
		*dest++ = *sr++;
	*dest = '\0';
	return (de);
}

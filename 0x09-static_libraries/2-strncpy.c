#include "main.h"

/**
 * _strcpy - a fuction that copies strings
 * @dest - input string
 * @src - input string
 * @n - input integer
 * Return: Pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int i = 0;
	char *de = dest;
	char *sr = src;

	while (*src)
	{
		slen++;
		src++;
	}

	slen++;

	if (n > slen)
		n = slen;
	src = sr;

	for (; i < n ; i++)
		*dest++ = *src++;

	return (de);
}

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
	int len;
	int j;
	char *re;

	len = 0;
	j = 0;

	while (dest[len] != '\0')
		++len;

	for (j = 0; src[j] != '\0'; ++j, ++len)
		dest[len] = src[j];
	dest[len] = '\0';
	*re = dest[100];

	return (re);
}

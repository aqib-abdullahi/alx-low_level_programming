#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an
 * array of characters
 * @size: size of array
 * @c: array initializing character
 * Return: Pointer to array, 0 otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);

}

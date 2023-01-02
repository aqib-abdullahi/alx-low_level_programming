#include "main.h"

/**
 * *_memset - A function that fills a memory block
 * with a specified input.
 * @*s: characters to be substituted
 * @b: character input to be used to fill the memory
 * blocks
 * @n: input of int type
 */

char *_memset(char *s, char b, unsigned int n)
{	
	char *str = s;
	unsigned int i;
	char value = b;

	for (i = 0; i < n; i++)
		str[i] = value;
	return (str);
}

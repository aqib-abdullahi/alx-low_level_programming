#include "main.h"

/**
 * *_memcpy - a function that copies
 * n bytes from memory area src to memory area dest
 * @*dest: destination of copied bytes
 * @*src: source of bytes to be copied
 * @n: int type input
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (d);
}

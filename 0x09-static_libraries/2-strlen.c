#include "main.h"

/**
 * _strlen - A function that get string length
 * @s: String in consideration
 * Return: String length
 */

int _strlen(char *s)
{
	int strlen;

	strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}

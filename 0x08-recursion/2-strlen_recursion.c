#include "main.h"

/**
 * _strlen_recursion - a function that returns
 * the length of a string
 * @s: input string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
		return (i + _strlen_recursion(s + i);
	}
	else
		return (0);
}

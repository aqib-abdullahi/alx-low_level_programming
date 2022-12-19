#include "main.h"

/**
 * _strlen - A function that get string length
 * @s: String in consideration
 * Return: String length
 */

int _strlen(char *s)
{
	char str1;
	int str;

	str1 = *s;

	str = strlen(str1);
	return (str);
}

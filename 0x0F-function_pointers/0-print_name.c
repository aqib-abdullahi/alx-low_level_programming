#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_name - prnts a name
 * @name: name to print
 * @f: pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

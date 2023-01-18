#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function
 * to be used
 * @s: operator
 * @int: int inputs
 * Return: NULL if s does not match
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	        {"+", op_add},
		{"-", op_sub},
	        {"*", op_mul},
	        {"/", op_div},
	        {"%", op_mod},
	        {NULL, NULL}
	    };
	int i = 0;
	
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
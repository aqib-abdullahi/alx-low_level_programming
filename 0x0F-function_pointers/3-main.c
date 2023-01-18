#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments
 * Return: if argc is wrong 98, if operator is wrong 99
 * if int divided or mod by 0, exit 100
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

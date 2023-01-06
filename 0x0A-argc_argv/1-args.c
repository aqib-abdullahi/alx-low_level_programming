#include <stdlib.h>
#include "main.h"

/**
 * main - a function that prints the
 * number of arguments passed into it
 * @argc: argument count
 * @argv: string of argument(s)
 * Return: 0 (success)
 */

int main_argc(int argc, char* argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

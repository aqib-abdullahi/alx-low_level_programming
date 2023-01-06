#include <stdio.h>

/**
 * main - a function that prints the
 * number of arguments passed into it
 * @argc: argument count
 * @argv: string of argument(s)
 * Return: 0 (success)
 */

int main_argc(int argc, char* argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}

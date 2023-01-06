#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that mulltiplies 2
 * passed parameters
 * @argc: argument count
 * @argv: passed arguments
 * Return: 0 (success) otherwise 1
 */

int main(int __attribute__ ((unused)) argc, char* argv[])
{
	int i;
	int mult;

	i = 2;

	if (argv[i])
	{
		mult = atoi(argv[i - 1]) * atoi(argv[i]);
		printf("%d\n", mult);
		return (0);
	}
	printf("Error");
	return (1);
}

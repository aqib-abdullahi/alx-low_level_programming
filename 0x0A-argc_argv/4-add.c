#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - a programm that adds possitive numbers
 * @argc: argument count
 * @argv: array of argument values
 * Return: 0 if no number is passed,
 * if there is a symbol that is not a digit return 1
 */

int main(int argc, char* argv[])
{
	int k = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else if (argc == 2)
	{
		if (isdigit(atoi(argv[1])))
			printf("%d\n", atoi(argv[1]));
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	else if (argc > 2)
	{
		for (k = 1; k < argc; k++)
		{
			if (isdigit(atoi(argv[k])))
			{
				sum += atoi(argv[k]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}

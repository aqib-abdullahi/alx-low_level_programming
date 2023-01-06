#include "main.h"
#include <stdio.h>

/**
 * main - a function that mulltiplies 2
 * passed parameters
 * @argc: argument count
 * @argv: passed arguments
 * Return: 0 (success) otherwise 1
 */

int main(int argc, char* argv[])
{
	int i;
	char Er = Error;

	i = 2;

	if (argv[i])
	{
		printf("%d\n", (argv[1] * argv[2]));
		return (0);
	}
	printf("%s\n", Er); 
	return (
		
}

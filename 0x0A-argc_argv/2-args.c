#include <stdio.h>

/**
 * main - a function that prints all arguments
 * it receives
 * @argc: argument count
 * @argv: array of arguments values
 * Return: 0 Always
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return(0);
}

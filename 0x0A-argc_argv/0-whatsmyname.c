#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its
 * name followed by a new line
 * Return: 0 success
 */

int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}	

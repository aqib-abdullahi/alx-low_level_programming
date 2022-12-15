#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Fizz Buzz test
 * Return: 0 always
 */

int main(void)
{
	int x;

	x = 0;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%i", x);
		
	}
	putchar('\n');

}

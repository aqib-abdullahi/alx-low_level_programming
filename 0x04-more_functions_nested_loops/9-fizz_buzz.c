#include <stdio.h>

/**
 * main - Entry point
 * Description: Fizz Buzz test
 * Return: 0 always
 */

int main(void)
{
	int x;

	x = 1;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf(" FizzBuzz");
		else if (x % 3 == 0)
			printf(" Fizz");
		else if (x % 5 == 0)
			printf(" Buzz");
		else
			printf(" %i", x);
		
	}
	printf("\n");

	return (0);

}

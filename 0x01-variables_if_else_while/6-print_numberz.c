#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing all single digits
 * of base 10 without the use of some functions.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{

	int d;



	for (d = '0'; d <= '9'; d++)
		putchar(d);


	putchar('\n');

	return (0);

}

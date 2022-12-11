#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Printing the numbers of base 16
 * in lower case.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char num;
	char ch;

	for (num = 0; num <= 9; num++)
		putchar(num);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);


	putchar('\n');
	return (0);

}

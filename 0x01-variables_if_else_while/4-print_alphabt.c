#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  a program that prints the alphabet in
 * lower case except the letter q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e')
		continue;

	if (ch == 'q')
		continue;

	putchar(ch);

	}
	putchar('\n');

	return (0);

}

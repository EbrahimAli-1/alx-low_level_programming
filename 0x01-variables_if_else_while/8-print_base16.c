#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print numbers of base 16 using putchar.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

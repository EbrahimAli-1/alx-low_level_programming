#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print lowercase
 * alphabets except q and e using putchar.
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;

		putchar(c);
	}

	putchar('\n');

	return (0);
}

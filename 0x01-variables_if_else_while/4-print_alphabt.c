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
		if (a == 'q' || a == 'e')
			continue;

		putchar(c);
	}

	return (0);
}

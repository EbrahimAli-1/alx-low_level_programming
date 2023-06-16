#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the lowercase alphabets
 * from a to z using putchar.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	return (0);
}

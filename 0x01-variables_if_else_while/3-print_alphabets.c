#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print lowercase alphabets
 * then uppercases alphabets using putchar .
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char l, u;

	for (l = 'a'; l <= "z"; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= "Z"; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}

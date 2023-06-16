#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print lowercase alphabets reversed using putchat.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}

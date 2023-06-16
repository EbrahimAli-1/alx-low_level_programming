#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print all single digit numbers
 * and seperates each number with comma and white-space using putchar.
 *
 * Return: Always 0 (Success)
*/



int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);

		if (a == 9)
			break;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

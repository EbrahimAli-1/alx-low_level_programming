#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all possible different combinations of two digits using putchar.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 0; 1 <= 9; 1++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (j == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

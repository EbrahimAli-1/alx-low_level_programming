#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all possible
 * different combinations of two digits using putchar.
 *
 * Return: Always 0 (Success)
*/



int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit < 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			putchar('0' + first_digit);
			putchar('0' + second_digit);

			if (first_digit < 8 || second_digit < 9)

			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return 0;
}

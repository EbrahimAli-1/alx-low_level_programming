#include <stdio.h>
#include <stdlib.h>


/**
 * main - A program to print single numbers from 0 to 10 using putchar.
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

	putchar('\n');

	return (0);
}

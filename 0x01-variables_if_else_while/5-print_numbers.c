#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints single numbers until 10 starting from 0 .
 *
 *Return: Always 0 (Success)
*/


int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
	{
		if (a % 2 != 0)
			printf("%d", a);
		else
			continue;
	}
	return (0);
}

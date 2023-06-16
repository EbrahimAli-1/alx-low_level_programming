#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program to print if the random number is +ve , -ve or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive");
	} else if (n < 0)
	{
		printf("The number is negative");
	} else
	{
		printf("The number is zero");
	}
	return (0);
}

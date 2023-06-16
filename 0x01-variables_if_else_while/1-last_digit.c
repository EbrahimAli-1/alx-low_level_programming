#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that print the last digit of random variable
 * and if it is greater than 5, equal to 0 or less than 6 but greater than 0 .
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0", n, digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);
	return (0);
}

#include "main.h"

/**
 * _sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 *
 * Return: the resulting square root
 */


int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
}

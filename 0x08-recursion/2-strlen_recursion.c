#include "main.h"

/*
 * _strlen_recursion - function to print the length of a string
 *
 * @s: the string itself.
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++
		_strlen_recursion(s + 1);
	}

	return (length);
}

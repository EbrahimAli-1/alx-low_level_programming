#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program to print _putchar.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int wrd[] = "_putchar";
	char ch;

	for (ch = 0; ch <= wrd.length; ch++)
	{
		_putchar(wrd[ch]);
	}
	_putchar('\n');
	return (0);
}

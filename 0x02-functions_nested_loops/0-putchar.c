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
	char wrd[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 8; ch++)
	{
		_putchar(wrd[ch]);
	}
	_putchar('\n');
	return (0);
}

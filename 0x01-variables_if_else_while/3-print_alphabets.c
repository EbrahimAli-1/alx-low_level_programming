#include <stdio.h>
#include <stdlib.h>

/*
 *
 *
 *
 *
 *
 *
*/

int main(void)
{
	char l, u;

	for (l = 'a', u = 'A'; l <= "z", u <= "Z"; l++, u++)
	{
		putchar(l);
		putchar(u);
	}
	putchar('\n');
	return (0);
}

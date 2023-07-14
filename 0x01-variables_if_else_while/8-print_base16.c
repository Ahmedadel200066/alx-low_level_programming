#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0
 *
 */

int main(void)
{
	char x, i;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x);
	}
	for (i = 'A' ; i <= 'F' ; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

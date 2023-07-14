#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0
 *
 */

int main(void)
{
	int x;
	int comma = 247;
	int space = 32;

	for (x = 48 ; x <= 57 ; x++)
	{
		putchar(x);
		if (x <=  56)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');

	return (0);
}

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
	int comma = 44;
	int space = 32;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (i = 48 ; i <=57 ; i++)
		{
		putchar(x);
		putchar(i);
		if (x == i)
		{
			continue;
		}
		putchar(comma);
		putchar(space);
		}
	}
	putchar('\n');

	return (0);
}

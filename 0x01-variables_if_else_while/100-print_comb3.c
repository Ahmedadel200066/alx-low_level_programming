#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0
 *
 */

int main(void)
{
	int i, x;
	int z = 48;
	int comma = 44;
	int space = 32;

	for (x = 48 ; x <= 57 ; x++)
	{
		z++;
		for (i = z ; i <= 57 ; i++)
		{
		putchar(x);
		putchar(i);
		if (x == 56)
		{
			continue;
		}
		putchar(comma);
		putchar(space);
		if (x == i)
		{
			continue;
		}
		}
	}
	putchar('\n');

	return (0);
}

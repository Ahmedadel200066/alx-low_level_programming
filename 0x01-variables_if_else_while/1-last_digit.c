#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - this function will told the number statue
 *
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%i last digit and is greater than 5\n", n % 10);
	}
	else if (n == 0)
	{
		printf("%i last digit and is 0\n", n % 10);
	}
	else if (n < 6)
	{
		printf("%i last digit and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}

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
		printf("%i and is greater than 5\n", n);
	}
	if else (n == 0)
        {
                printf("%i and is 0\n", n);
        }
	else (n < 6)
        {
                printf("%i and is less than 6 and not 0\n", n);
        }
	return (0);
}

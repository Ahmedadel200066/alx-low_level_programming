#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	print("size of a char: %lu byte(s)\n", sizeof(char));
	print("size of an int: %lu byte(s)\n", sizeof(int));
	print("size of a long int: %lu byte(s)\n", sizeof(long int));
	print("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	print("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

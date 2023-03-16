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
	print("size of a char: %u byte(s)\n", sizeof(char));
	print("size of an int: %u byte(s)\n", sizeof(int));
	print("size of a long int: %u byte(s)\n", sizeof(long int));
	print("size of a long long int: %u byte(s)\n", sizeof(long long int));
	print("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}

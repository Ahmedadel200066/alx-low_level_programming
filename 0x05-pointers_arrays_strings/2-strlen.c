#include <stdio.h>

/**
* _strlen - Returns the length of a string
* @s: The string to get the lenght of
* Return: The lenght of @str
*/
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
	x++;
	return (x);
}

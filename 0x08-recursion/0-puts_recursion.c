#include "main.h"
/**
 * _puts_recursion - funct to prnt character;
 * @s: input parameter
 * Return: Always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

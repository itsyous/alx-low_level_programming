#include "main.h"

int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}

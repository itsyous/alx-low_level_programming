#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

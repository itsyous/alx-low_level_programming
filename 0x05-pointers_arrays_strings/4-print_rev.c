#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	while (n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');

}

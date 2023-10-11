#include "main.h"

/**
 * print_line - draw a straight line
 * @n:the number of times the character should be printed
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 0; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}

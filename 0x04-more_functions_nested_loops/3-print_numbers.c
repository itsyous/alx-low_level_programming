#include "main.h"

/**
 * print_numbers - prints numbers range 0 - 9
 * @c: the number to_be_printed
 *
 * Return: On Success
 */

int _putchar(char c);

/**
 * print_numbers - prints numbers range 0 - 9
 *
 * Return: On Success
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);

	}
	_putchar('\n');
}

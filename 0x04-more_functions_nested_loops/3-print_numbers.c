#include "main.h"

int _putchar(char c);

/**
 * print_numbers - prints numbers
 * Return: no return
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar(n);
		n++;

	}
	_putchar('\n');

}

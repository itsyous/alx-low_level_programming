#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @c: the_character_to_be_written
 *
 * Return: On Success
 */
int _putchar(char c);
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer_to_be_
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

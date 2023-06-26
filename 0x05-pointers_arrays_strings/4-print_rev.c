#include "main.h"
/**
 * _puts - prints reversed string, followed by a new line
 * @c: the_character_to_be_written
 * Return: On Success
*/
int _putchar(char c);
/**
 * _puts - prints reversed string, followed by a new line
 * @str: pointer_to_be
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/
int _putchar(char c);

/**
 * _puts - prints reversed string, followed by a new line,
 * @str: pointer_to_be
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	        i--;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}

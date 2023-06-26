#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @c: pointer to the string to print
 * Return: void
*/
int _putchar(char c);
/**
 * print_rev - prints reversed string, followed by a new line
 * @str: pointer_to_be
 * Return: void
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

#include "main.h"
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}

		n++;
	}
	_putchar('\n');
}

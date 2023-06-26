#include "main.h"

int _putchar(char c);

/**
 * puts2 - prints a string, followed by a new line,
 * @s: the string_to_be_printed
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

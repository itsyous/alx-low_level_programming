#include "main.h"

int _putchar (char c);

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: the string_to_be_printed
 */
void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;

	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}

#include "main.h"

int _putchar(char c);

/**
 * _strlen_recursion - calculate the lenght of a string
 * @s: the string to count
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

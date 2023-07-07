#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}

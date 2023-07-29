#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: Pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;


	return (n);
}

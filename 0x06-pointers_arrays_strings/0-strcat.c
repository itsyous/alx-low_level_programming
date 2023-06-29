#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @n: input value
 *
 * return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}

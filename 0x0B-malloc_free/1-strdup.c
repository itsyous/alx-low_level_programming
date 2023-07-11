#include <stdlib.h>

/**
 * _stdrup - Duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *s;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

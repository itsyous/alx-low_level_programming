#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - concatenates two strings of any size
 *@s1: the first string to concatenate
 *s2: the second string to concatenate
 *Return: two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}

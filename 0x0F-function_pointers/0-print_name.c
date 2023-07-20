#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the string name
 * @f: the printing function pointer
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

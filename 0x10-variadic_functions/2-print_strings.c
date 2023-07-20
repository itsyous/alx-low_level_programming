#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}

#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct_token - struct token
 *
 * @token: format token
 * @f: the function associated
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

#endif

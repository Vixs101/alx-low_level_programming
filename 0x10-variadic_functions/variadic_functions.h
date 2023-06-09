#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * struct printer - structure
 * @symbol:array of format specifiers
 * @print: corresponding print functions
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list);
} printer_t;

#endif /* VARIADIC_FUNCTION_H */

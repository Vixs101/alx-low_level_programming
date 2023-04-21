#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @arg: a list of arguments
 */

void print_char(va_list arg)
{
	char alphabet;

	alphabet = va_arg(arg, int);
	printf("%c", alphabet);
}

/**
 * print_int - prints an integer
 * @arg: a list of arguments
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: a list of arguments
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: a list of arguments
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - A function that prints anything
 * @format: a string of characters representing the argument types
 * @...: A variable number of arguments to be printed
 * Description: Any argument not of type char, int, float, or char * is ignored
 * if a string argument is null, nil is printed instead
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(arg);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}

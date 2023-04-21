#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: argument count
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, const unsigned int);
		}
	}

	va_end(arg);
	return (sum);
}

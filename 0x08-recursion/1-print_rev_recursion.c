#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: a pointer that points to an array of characters
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

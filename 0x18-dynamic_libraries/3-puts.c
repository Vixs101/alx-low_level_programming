#include "main.h"

/**
 *  _puts - a funtion that prints a string followed by a new line to stdout
 * @s: the string to print
 * Return: void
 */

void _puts(char *s)
{
	for (; *s != '\0' ; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
